@protocol GCFrontmostApplicationObserverDelegate;

@interface GCFrontmostApplicationObserver : NSObject {
    int _frontmostPid;
}

@property (weak, nonatomic) id<GCFrontmostApplicationObserverDelegate> delegate;

+ (void)initialize;

- (id)initWithDelegate:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_ui_start_ObservingFrontmostPID;
- (int)_ui_frontmostPID;
- (void)_ui_stop_ObservingFrontmostPID;
- (void)assignFrontmostPid;
- (void)notifyDelegate;

@end
