@class NSString;

@interface CDPFollowUpContext : NSObject <NSSecureCoding> {
    unsigned long long _repairType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long repairType;
@property (copy, nonatomic) NSString *telemetryDeviceSessionID;
@property (copy, nonatomic) NSString *telemetryFlowID;
@property (copy, nonatomic) NSString *followUpType;
@property (nonatomic) BOOL shouldNotify;
@property (nonatomic) BOOL force;
@property (copy, nonatomic) NSString *altDSID;

+ (id)contextForStateRepair;
+ (id)contextForConfirmExistingSecret;
+ (id)contextForOfflinePasscodeChange;
+ (id)_contextWithType:(id)a0 cdpContext:(id)a1;
+ (id)contextForADPStateHealing;
+ (id)contextForADPUpsell;
+ (id)contextForCDPEDPStateRepair;
+ (id)contextForEDPStateRepair;
+ (id)contextForRecoveryKeyMismatchHealing;
+ (id)contextForRecoveryKeyRepair;
+ (id)contextForSOSCompatibilityMode;
+ (id)contextForSecureTerms;
+ (id)contextForSettingUpBiometrics;
+ (id)contextForWalrusCreatePasscodeWithCDPContext:(id)a0;
+ (id)contextWithType:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
