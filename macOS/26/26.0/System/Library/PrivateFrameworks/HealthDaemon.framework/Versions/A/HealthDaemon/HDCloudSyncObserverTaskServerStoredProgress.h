@class NSProgress;

@interface HDCloudSyncObserverTaskServerStoredProgress : NSObject

@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) id /* block */ invalidationBlock;

- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithProgress:(id)a0;

@end
