@class NSString, PXScheduler;

@interface PXSchedulerTrackedAnimation : NSObject {
    PXScheduler *_scheduler;
}

@property (readonly, nonatomic) NSString *label;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithScheduler:(id)a0 label:(id)a1;

@end
