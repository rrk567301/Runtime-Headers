@class NSNumber, NSString;

@interface CAAdditionalCertInfo : NSObject {
    NSNumber *_caSerialNumber;
    NSNumber *_caValidityPeriod;
    int _caCreateCAWebSite;
    int _signInvite;
    struct __SecIdentity { } *_caChosenIdentityToSignInvitation;
    NSString *_alternateLocationForCAWebSite;
}

- (void)dealloc;
- (id)_serialNumber;
- (void)_setCreateCAWebSite:(int)a0;
- (int)_createCAWebSite;
- (int)_signInvitation;
- (void)_setToDefaults;
- (struct __SecIdentity { } *)_chosenIdentityToSignInvitation;
- (void)setChosenIdentityToSignInvitation:(struct __SecIdentity { } *)a0;
- (void)_setValidityPeriod:(id)a0;
- (id)_validityPeriod;
- (void)_setAlternateLocationForCAWebSite:(id)a0;
- (id)_alternateLocationForCAWebSite;
- (void)_setSerialNumber:(id)a0;

@end
