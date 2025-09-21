@class NSString, NSUUID;

@interface AACustodianRecoveryRequestContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char CLIMode;
@property (nonatomic, getter=isDataOnlyRecovery) char dataOnlyRecovery;
@property (copy, nonatomic) NSString *telemetryFlowID;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *recoverySessionID;
@property (copy, nonatomic) NSString *ownerAppleID;
@property (copy, nonatomic) NSString *recoveryCode;
@property (copy, nonatomic) NSUUID *custodianUUID;
@property (copy, nonatomic) NSString *custodianRecoveryToken;
@property (copy, nonatomic) NSString *recordBuildVersion;
@property (nonatomic) char isAccountRecovery;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
