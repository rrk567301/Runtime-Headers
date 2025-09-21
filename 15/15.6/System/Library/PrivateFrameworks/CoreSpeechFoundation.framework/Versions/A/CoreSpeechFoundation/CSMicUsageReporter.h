@class STMediaStatusDomainPublisher, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface CSMicUsageReporter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) STMediaStatusDomainPublisher *micUsagePublisher;
@property (retain, nonatomic) NSSet *micUsageAttribute;

- (id)init;
- (void).cxx_destruct;
- (char)_getAuditToken:(struct { unsigned int x0[8]; } *)a0;
- (void)reportMicUsage:(char)a0;

@end
