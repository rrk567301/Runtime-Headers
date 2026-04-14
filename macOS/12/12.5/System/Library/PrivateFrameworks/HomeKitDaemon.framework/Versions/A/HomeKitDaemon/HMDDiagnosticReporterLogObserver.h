@class NSString, SDRDiagnosticReporter, NSObject;
@protocol OS_dispatch_queue;

@interface HMDDiagnosticReporterLogObserver : HMFObject <HMMLogEventObserver, HMFLogging>

@property (class, readonly) HMDDiagnosticReporterLogObserver *sharedObserver;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) SDRDiagnosticReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)supportedEventClasses;
+ (BOOL)isSupportedEvent:(id)a0;
+ (id)domainForEvent:(id)a0;
+ (id)typeForEvent:(id)a0;
+ (id)subTypeForEvent:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (BOOL)shouldSubmitEvent:(id)a0;

@end
