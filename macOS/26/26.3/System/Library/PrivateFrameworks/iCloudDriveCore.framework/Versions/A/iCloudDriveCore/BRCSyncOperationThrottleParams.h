@interface BRCSyncOperationThrottleParams : NSObject

@property (nonatomic) double minWait;
@property (nonatomic) double maxWait;
@property (nonatomic) double ratioOnSuccess;
@property (nonatomic) double ratioOnQuotaErrorClear;
@property (nonatomic) double ratioOnFailure;
@property (nonatomic) double inactivityKickbackDelay;
@property (nonatomic) double inactivityKickbackRatio;

- (id)paramsToDictionary;
- (BOOL)check;
- (id)initWithParams:(id)a0 defaults:(id)a1;
- (double)doubleForKey:(id)a0 inParams:(id)a1 defaults:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)setupWithParams:(id)a0 defaults:(id)a1;
- (unsigned long long)hash;

@end
