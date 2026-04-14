@class NSDictionary, NSObject, MNObserverHashTable;
@protocol OS_dispatch_queue;

@interface MNAudioPathwayResourceAccess : NSObject {
    MNObserverHashTable *_observers;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
}

@property (retain, nonatomic) NSDictionary *hfpRoute;
@property (nonatomic) BOOL enableHFPUse;
@property (nonatomic) BOOL wantsVolumeControl;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithHFPEnabled:(BOOL)a0;

@end
