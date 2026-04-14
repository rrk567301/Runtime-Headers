@class NSObject;
@protocol OS_dispatch_group;

@interface PXStoryPausableLoadingCoordinator : NSObject <PXStoryLoadingCoordinator> {
    NSObject<OS_dispatch_group> *_timelineWorkGroup;
}

- (id)init;
- (void).cxx_destruct;
- (void)pauseTimelineWork;
- (void)resumeTimelineWork;
- (void)dispatchTimelineWorkAsyncOnQueue:(id)a0 block:(id /* block */)a1;

@end
