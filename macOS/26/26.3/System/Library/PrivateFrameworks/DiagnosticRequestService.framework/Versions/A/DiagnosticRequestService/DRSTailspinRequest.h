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
+ (BOOL)_shouldScrub;
+ (Class)_moClass;

- (id)logType;
- (id)initWithXPCDict:(id)a0;
- (id)debugDescription;
- (unsigned long long)expectedType;
- (BOOL)_performPostClientLogWork:(id)a0 dampeningOutcome:(unsigned long long)a1 isLogUploadEnabled:(BOOL)a2;
- (id)_tailspinOptions;
- (void)_configureRequestMO:(id)a0;
- (id)requestType;
- (id)_initWithTailspinRequestMO_ON_MOC_QUEUE:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToRequest:(id)a0;
- (BOOL)_dumpTailspinToDirectory:(id)a0;

@end
