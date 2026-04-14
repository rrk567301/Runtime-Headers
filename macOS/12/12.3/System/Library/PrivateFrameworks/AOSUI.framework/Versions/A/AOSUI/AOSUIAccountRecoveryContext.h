@class NSURL, NSString;

@interface AOSUIAccountRecoveryContext : NSObject <NSCopying>

@property BOOL recoveryKeyStatus;
@property BOOL recoveryKeyEligible;
@property (copy) NSURL *recoveryKeyURL;
@property (copy) NSString *recoveryKeyHttpMethod;
@property BOOL shouldShowAppleRecovery;
@property (copy) NSURL *appleRecoveryDetailSetupURL;
@property (copy) NSString *appleRecoveryLabel;
@property (copy) NSString *appleRecoveryDetailSetupHTTPMethod;
@property (copy) NSURL *appleRecoveryLearnMoreLink;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithOptionsDictionary:(id)a0 shouldShowAppleRecovery:(BOOL)a1;

@end
