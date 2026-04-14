@protocol GCFrontmostApplicationObserverDelegate;

@interface GCFrontmostApplicationObserver : NSObject {
    int _frontmostPid;
}

@property (weak, nonatomic) id<GCFrontmostApplicationObserverDelegate> delegate;

+ (void)initialize;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)_ui_start_ObservingFrontmostPID;
- (int)_ui_frontmostPID;
- (void)_ui_stop_ObservingFrontmostPID;
- (void)assignFrontmostPid;
- (void)notifyDelegate;

@end
