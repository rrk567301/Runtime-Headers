@class NSNumber;

@interface DRSTailspinRequest : DRSRequest

@property (class, nonatomic) BOOL enforceMinTraceBufferDuration;

@property (readonly, nonatomic) BOOL includeOsSignpost;
@property (readonly, nonatomic) BOOL includeOsLog;
@property (readonly, nonatomic) BOOL scrubbed;
@property (readonly, nonatomic) NSNumber *minMAT;
@property (readonly, nonatomic) NSNumber *maxMAT;

+ (id)entityName;
+ (id)requiredSystemResourceName;
+ (void)resetEnforceMinTraceBufferDuration;
+ (BOOL)_shouldScrub;
+ (Class)_moClass;

- (id)initWithXPCDict:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)debugDescription;
- (id)requestType;
- (void)_configureRequestMO:(id)a0;
- (unsigned long long)expectedType;
- (BOOL)_performPostClientLogWork:(id)a0 dampeningOutcome:(unsigned long long)a1 isLogUploadEnabled:(BOOL)a2;
- (id)logType;
- (void).cxx_destruct;
- (id)_initWithTailspinRequestMO_ON_MOC_QUEUE:(id)a0;
- (id)_tailspinOptions;
- (BOOL)_dumpTailspinToDirectory:(id)a0;

@end
