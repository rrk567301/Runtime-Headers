@interface BRCSyncOperationThrottleParams : NSObject

@property (nonatomic) double minWait;
@property (nonatomic) double maxWait;
@property (nonatomic) double ratioOnSuccess;
@property (nonatomic) double ratioOnQuotaErrorClear;
@property (nonatomic) double ratioOnFailure;
@property (nonatomic) double inactivityKickbackDelay;
@property (nonatomic) double inactivityKickbackRatio;

- (BOOL)check;
- (double)doubleForKey:(id)a0 inParams:(id)a1 defaults:(id)a2;
- (void)setupWithParams:(id)a0 defaults:(id)a1;
- (id)paramsToDictionary;
- (unsigned long long)hash;
- (id)initWithParams:(id)a0 defaults:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
