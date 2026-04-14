@class STMediaStatusDomainPublisher, NSObject;
@protocol OS_dispatch_queue;

@interface AVVCMicUsageReporter : NSObject {
    NSObject<OS_dispatch_queue> *mMicUsageQueue;
    STMediaStatusDomainPublisher *mMicUsagePublisher;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)reportMicUsage:(BOOL)a0;
- (BOOL)_getAuditToken:(struct { unsigned int x0[8]; } *)a0;

@end
