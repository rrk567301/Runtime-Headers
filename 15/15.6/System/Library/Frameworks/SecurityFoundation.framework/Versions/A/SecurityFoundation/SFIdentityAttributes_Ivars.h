@class NSString, _SFKeySpecifier;

@interface SFIdentityAttributes_Ivars : NSObject {
    NSString *localizedLabel;
    NSString *localizedDescription;
    _SFKeySpecifier *keySpecifier;
    NSString *identityName;
    NSString *privateKeyDomain;
    char hasCertificate;
}

- (void).cxx_destruct;

@end
