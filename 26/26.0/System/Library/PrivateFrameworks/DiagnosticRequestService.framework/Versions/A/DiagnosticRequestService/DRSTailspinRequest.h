@class NSNumber;

@interface DRSTailspinRequest : DRSRequest

@property (class, nonatomic) BOOL enforceMinTraceBufferDuration;

@property (readonly, nonatomic) BOOL includeOsSignpost;
@property (readonly, nonatomic) BOOL includeOsLog;
@property (readonly, nonatomic) BOOL scrubbed;
@property (readonly, nonatomic) NSNumber *minMAT;
@property (readonly, nonatomic) NSNumber *maxMAT;

+ (id)requiredSystemResourceName;
+ (id)entityName;
+ (void)resetEnforceMinTraceBufferDuration;
+ (Class)_moClass;
+ (BOOL)_shouldScrub;

- (unsigned long long)expectedType;
- (id)logType;
- (id)initWithXPCDict:(id)a0;
- (void)_configureRequestMO:(id)a0;
- (id)requestType;
- (id)debugDescription;
- (BOOL)isEqualToRequest:(id)a0;
- (BOOL)_performPostClientLogWork:(id)a0 dampeningOutcome:(unsigned long long)a1 isLogUploadEnabled:(BOOL)a2;
- (id)_tailspinOptions;
- (BOOL)_dumpTailspinToDirectory:(id)a0;
- (id)_initWithTailspinRequestMO_ON_MOC_QUEUE:(id)a0;
- (void).cxx_destruct;

@end
