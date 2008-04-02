// -*- lsst-c++ -*-
/**
  * \class Security
  *
  * \ingroup daf
  *
  * \brief Implements the logic that enforces the access and authorization 
  *  rules that apply to an LsstData Realization.
  * 
  * 
  * \note OUT OF SCOPE FOR DC2 - stub implementation
  * 
  * \author  $Author::                                                        $
  * \version $Rev::                                                           $
  * \date    $Date::                                                          $
  * 
  * $Id::                                                                     $
  * 
  * Contact: Jeff Bartels (jeffbartels@usa.net)
  * 
  * Created: 03-Apr-2007 5:30:00 PM
  * 
  */

#ifndef LSST_SECURITY_SECURITY_H
#define LSST_SECURITY_SECURITY_H

#include <boost/shared_ptr.hpp>

#include "lsst/daf/base/Citizen.h"

namespace lsst {
namespace security {

class Security : public lsst::daf::base::Citizen {
public:
    /// Default constructor
    Security();
    /// Copy initialization semantics (NIL in this revision)
    Security(const Security&);
    /// Copy assignment semantics (NIL in this revision)
    Security& operator= (const Security&);
    /// Virtual destructor, class may be specialized (see Stroustrup 12.4.2)
    virtual ~Security();

    /// Reference-counted pointer typedef forinstances of this class
    typedef boost::shared_ptr<Security> PtrType;
    
    /// A short string representation of an instance
    std::string toString();
};
    
}} // namespace lsst::security

#endif // LSST_SECURITY_SECURITY_H
