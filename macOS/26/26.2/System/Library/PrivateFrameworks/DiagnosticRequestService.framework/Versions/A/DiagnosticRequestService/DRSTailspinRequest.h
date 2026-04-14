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

- (id)logType;
- (id)initWithXPCDict:(id)a0;
- (unsigned long long)expectedType;
- (BOOL)isEqualToRequest:(id)a0;
- (id)_tailspinOptions;
- (void)_configureRequestMO:(id)a0;
- (id)debugDescription;
- (id)requestType;
- (void).cxx_destruct;
- (BOOL)_performPostClientLogWork:(id)a0 dampeningOutcome:(unsigned long long)a1 isLogUploadEnabled:(BOOL)a2;
- (BOOL)_dumpTailspinToDirectory:(id)a0;
- (id)_initWithTailspinRequestMO_ON_MOC_QUEUE:(id)a0;

@end
