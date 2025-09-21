@class STMediaStatusDomainPublisher, NSObject;
@protocol OS_dispatch_queue;

@interface AVVCMicUsageReporter : NSObject {
    NSObject<OS_dispatch_queue> *mMicUsageQueue;
    STMediaStatusDomainPublisher *mMicUsagePublisher;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (char)_getAuditToken:(struct { unsigned int x0[8]; } *)a0;
- (void)reportMicUsage:(char)a0;

@end
