@class FBSDisplayLayoutMonitor, NSArray, FigCaptureDisplayLayout, NSMutableArray;

@interface FigCaptureDisplayLayoutMonitor : NSObject {
    struct OpaqueFigSimpleMutex { } *_layoutObserversLock;
    NSMutableArray *_layoutObservers;
    struct OpaqueFigSimpleMutex { } *_layoutLock;
    FigCaptureDisplayLayout *_layout;
    NSArray *_elementIdentifiersToIgnore;
    FBSDisplayLayoutMonitor *_layoutMonitor;
}

@property (readonly, nonatomic) long long displayType;
@property (readonly, nonatomic, getter=isOnHomeScreen) BOOL onHomeScreen;
@property (readonly, nonatomic, getter=isOnLockScreen) BOOL onLockScreen;

+ (void)initialize;
+ (id)sharedDisplayLayoutMonitor;
+ (id)sharedExternalDisplayLayoutMonitor;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)addLayoutObserver:(id)a0;
- (id)initWithFBSDisplayLayoutMonitorCreateFunction:(void /* function */ *)a0 displayType:(long long)a1;
- (void)removeLayoutObserver:(id)a0;

@end
