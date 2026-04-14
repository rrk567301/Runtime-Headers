@class NSString, NSUUID;

@interface CDMDataDispatcherContext : NSObject

@property (readonly, nonatomic) NSString *callingBundleId;
@property (readonly, nonatomic) NSUUID *streamUUID;
@property (nonatomic) int cdmSELFLoggingPolicyType;
@property (nonatomic) unsigned long long samplingDiceRoll;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCallingBundleId:(id)a0;
- (BOOL)isSampledForEmission;

@end
