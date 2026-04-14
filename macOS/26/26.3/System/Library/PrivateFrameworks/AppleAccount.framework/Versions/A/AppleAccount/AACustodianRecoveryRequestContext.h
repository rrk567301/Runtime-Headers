@class NSString, NSUUID;

@interface AACustodianRecoveryRequestContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL CLIMode;
@property (nonatomic, getter=isDataOnlyRecovery) BOOL dataOnlyRecovery;
@property (copy, nonatomic) NSString *telemetryFlowID;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *recoverySessionID;
@property (copy, nonatomic) NSString *ownerAppleID;
@property (copy, nonatomic) NSString *recoveryCode;
@property (copy, nonatomic) NSUUID *custodianUUID;
@property (copy, nonatomic) NSString *custodianRecoveryToken;
@property (copy, nonatomic) NSString *recordBuildVersion;
@property (nonatomic) BOOL isAccountRecovery;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
