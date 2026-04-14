@class FBSDisplayLayoutMonitor, NSString, NSHashTable;

@interface IRDisplayMonitor : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMinitor;
@property (retain, nonatomic) NSString *appInFocus;
@property (nonatomic) BOOL displayOn;
@property (nonatomic) BOOL displayLocked;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)didUpdateDisplayLayout:(id)a0;
- (id)getAppInFocus;

@end
