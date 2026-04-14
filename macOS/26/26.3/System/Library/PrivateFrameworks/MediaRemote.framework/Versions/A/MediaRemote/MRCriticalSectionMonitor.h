@class NSObject;
@protocol OS_dispatch_queue, MRCriticalSectionMonitorDelegate;

@interface MRCriticalSectionMonitor : NSObject

@property (weak, nonatomic) id<MRCriticalSectionMonitorDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, getter=isObserving) BOOL observing;
@property (nonatomic, getter=isCritical) BOOL critical;

- (void)stopObserving;
- (void)startObserving;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)_handleCriticalSectionDidBecomeCritical:(id)a0;
- (void)_handleCriticalSectionDidStopBeingCritical:(id)a0;
- (void)_handleMediaRemoteDeath:(id)a0;
- (void)_notifyIsCritical:(BOOL)a0;
- (void)_updateCriticalState:(BOOL)a0;

@end
