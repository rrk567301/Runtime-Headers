@class NSURL, NSString;

@interface AOSUIAccountRecoveryContext : NSObject <NSCopying>

@property char recoveryKeyStatus;
@property char recoveryKeyEligible;
@property (copy, nonatomic) NSURL *recoveryKeyURL;
@property (copy, nonatomic) NSString *recoveryKeyHttpMethod;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithOptionsDictionary:(id)a0;
- (id)initWithRecoveryKeyStatus:(char)a0 recoveryKeyEligible:(char)a1;

@end
