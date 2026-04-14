@class NSString;

@interface CDPFollowUpContext : NSObject <NSSecureCoding> {
    unsigned long long _repairType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long repairType;
@property (copy, nonatomic) NSString *followUpType;
@property (nonatomic) BOOL shouldNotify;
@property (nonatomic) BOOL force;
@property (copy, nonatomic) NSString *altDSID;

+ (id)contextForStateRepair;
+ (id)contextWithType:(id)a0;
+ (id)_contextWithType:(id)a0 cdpContext:(id)a1;
+ (id)contextForOfflinePasscodeChange;
+ (id)contextForRecoveryKeyRepair;
+ (id)contextForSettingUpBiometrics;
+ (id)contextForSecureTerms;
+ (id)contextForConfirmExistingSecret;
+ (id)contextForWalrusCreatePasscodeWithCDPContext:(id)a0;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
