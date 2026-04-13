@class NSURL, NSString;

@interface AOSUIAccountRecoveryContext : NSObject

@property BOOL recoveryKeyStatus;
@property BOOL recoveryKeyEligible;
@property (retain) NSURL *recoveryKeyURL;
@property (copy) NSString *recoveryKeyHttpMethod;
@property BOOL shouldShowAppleRecovery;
@property (retain) NSURL *appleRecoveryDetailSetupURL;
@property (copy) NSString *appleRecoveryLabel;
@property (copy) NSString *appleRecoveryDetailSetupHTTPMethod;
@property (retain) NSURL *appleRecoveryLearnMoreLink;

- (void).cxx_destruct;
- (id)initWithOptionsDictionary:(id)a0 shouldShowAppleRecovery:(BOOL)a1;

@end
