@protocol CPLSyncSessionRescheduler, CPLSyncSessionRuntimeCharacteristics;

@interface CPLSyncSessionBlockedState : NSObject

@property (readonly, nonatomic) id<CPLSyncSessionRescheduler> rescheduler;
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (readonly, nonatomic) BOOL syncHasBeenRequested;
@property (readonly) id<CPLSyncSessionRuntimeCharacteristics> runtimeCharacteristics;

- (void).cxx_destruct;
- (id)initWithRescheduler:(id)a0 blocked:(BOOL)a1 syncHasBeenRequested:(BOOL)a2 runtimeCharacteristics:(id)a3;

@end
