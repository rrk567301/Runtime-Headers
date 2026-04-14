@class NSProgress, MCActivityMonitor;

@interface MCActivityUpdater : NSObject

@property (retain, nonatomic) MCActivityMonitor *monitor;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) BOOL valid;

- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMonitor:(id)a0 progress:(id)a1;

@end
