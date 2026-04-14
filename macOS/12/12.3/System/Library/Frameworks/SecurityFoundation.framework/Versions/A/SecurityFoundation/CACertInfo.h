@class NSString;

@interface CACertInfo : NSObject {
    NSString *_caCertAuthorityName;
    NSString *_caCommonName;
    NSString *_caOrganization;
    NSString *_caOrganizationUnit;
    NSString *_caLocality;
    NSString *_caState;
    NSString *_caCountry;
    NSString *_caEmailAddressOfRequestor;
    NSString *_caEmailAddressOfCA;
}

- (void)dealloc;
- (id)_state;
- (void)_setOrganization:(id)a0;
- (void)_setOrganizationUnit:(id)a0;
- (void)_setLocality:(id)a0;
- (void)_setState:(id)a0;
- (void)_setCountry:(id)a0;
- (void)_clearValues;
- (void)_setUserEmailAddressOfRequestor:(id)a0;
- (id)_userEmailAddressOfRequestor;
- (id)_certAuthorityName;
- (void)_setCertAuthorityName:(id)a0;
- (id)_commonName;
- (void)_setCommonName:(id)a0;
- (id)_organization;
- (id)_organizationUnit;
- (id)_locality;
- (id)_country;
- (void)_setEmailAddressOfCA:(id)a0;
- (id)_emailAddressOfCA;

@end
