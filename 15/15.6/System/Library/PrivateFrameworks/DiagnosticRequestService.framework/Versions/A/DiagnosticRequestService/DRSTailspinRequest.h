@class NSNumber;

@interface DRSTailspinRequest : DRSRequest

@property (class, nonatomic) char enforceMinTraceBufferDuration;

@property (readonly, nonatomic) char includeOsSignpost;
@property (readonly, nonatomic) char includeOsLog;
@property (readonly, nonatomic) char scrubbed;
@property (readonly, nonatomic) NSNumber *minMAT;
@property (readonly, nonatomic) NSNumber *maxMAT;

+ (id)entityName;
+ (Class)_moClass;
+ (char)_shouldScrub;
+ (id)requiredSystemResourceName;
+ (void)resetEnforceMinTraceBufferDuration;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)requestType;
- (id)initWithXPCDict:(id)a0;
- (char)isEqualToRequest:(id)a0;
- (id)logType;
- (void)_configureRequestMO:(id)a0;
- (char)_dumpTailspinToDirectory:(id)a0;
- (id)_initWithTailspinRequestMO_ON_MOC_QUEUE:(id)a0;
- (char)_performPostClientLogWork:(id)a0 dampeningOutcome:(unsigned long long)a1 isLogUploadEnabled:(char)a2;
- (id)_tailspinOptions;
- (unsigned long long)expectedType;

@end
