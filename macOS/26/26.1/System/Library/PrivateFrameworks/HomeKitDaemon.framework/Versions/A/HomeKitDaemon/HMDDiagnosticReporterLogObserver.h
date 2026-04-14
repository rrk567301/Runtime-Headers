@class NSString, SDRDiagnosticReporter, NSObject;
@protocol OS_dispatch_queue, HMMLogEventDispatching;

@interface HMDDiagnosticReporterLogObserver : HMFObject <HMMLogEventObserver, HMFLogging>

@property (readonly, weak, nonatomic) id<HMMLogEventDispatching> logEventDispatcher;
@property (readonly) unsigned long long memoryExceptionThreshold;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) SDRDiagnosticReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedEventClasses;
+ (id)typeForEvent:(id)a0;
+ (id)logCategory;
+ (id)subTypeForEvent:(id)a0;
+ (BOOL)isSupportedEvent:(id)a0;
+ (id)domainForEvent:(id)a0;

- (void)start;
- (void)observeEvent:(id)a0;
- (id)initWithLogEventDispatcher:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)shouldSubmitEvent:(id)a0;

@end
