@class NSNumber;

@interface DRSTailspinRequest : DRSRequest

@property (class, nonatomic) BOOL enforceMinTraceBufferDuration;

@property (readonly, nonatomic) BOOL includeOsSignpost;
@property (readonly, nonatomic) BOOL includeOsLog;
@property (readonly, nonatomic) BOOL scrubbed;
@property (readonly, nonatomic) NSNumber *minMAT;
@property (readonly, nonatomic) NSNumber *maxMAT;

+ (id)entityName;
+ (void)resetEnforceMinTraceBufferDuration;
+ (id)requiredSystemResourceName;
+ (Class)_moClass;
+ (BOOL)_shouldScrub;

- (id)initWithXPCDict:(id)a0;
- (id)logType;
- (unsigned long long)expectedType;
- (id)_tailspinOptions;
- (BOOL)_performPostClientLogWork:(id)a0 dampeningOutcome:(unsigned long long)a1 isLogUploadEnabled:(BOOL)a2;
- (BOOL)_dumpTailspinToDirectory:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)requestType;
- (void)_configureRequestMO:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)_initWithTailspinRequestMO_ON_MOC_QUEUE:(id)a0;

@end
