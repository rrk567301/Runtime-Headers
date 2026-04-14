@class STMediaStatusDomainPublisher, NSObject;
@protocol OS_dispatch_queue;

@interface AVVCMicUsageReporter : NSObject {
    NSObject<OS_dispatch_queue> *mMicUsageQueue;
    STMediaStatusDomainPublisher *mMicUsagePublisher;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (BOOL)_getAuditToken:(struct { unsigned int x0[8]; } *)a0;
- (void)reportMicUsage:(BOOL)a0;

@end
