@class NSProgress;

@interface HDCloudSyncObserverTaskServerStoredProgress : NSObject

@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) id /* block */ invalidationBlock;

- (void)invalidate;
- (void).cxx_destruct;
- (id)init;
- (id)initWithProgress:(id)a0;

@end
