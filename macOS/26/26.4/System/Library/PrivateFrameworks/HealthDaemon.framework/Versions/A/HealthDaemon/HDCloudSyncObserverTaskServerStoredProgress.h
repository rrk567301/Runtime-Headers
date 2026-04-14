@class NSProgress;

@interface HDCloudSyncObserverTaskServerStoredProgress : NSObject

@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) id /* block */ invalidationBlock;

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (id)initWithProgress:(id)a0;

@end
