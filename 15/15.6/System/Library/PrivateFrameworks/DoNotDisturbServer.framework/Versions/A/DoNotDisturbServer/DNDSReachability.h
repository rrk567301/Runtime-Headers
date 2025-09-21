@class NSHashTable, NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue, OS_dispatch_source;

@interface DNDSReachability : NSObject

@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *debounceTimer;
@property (readonly, nonatomic) NSHashTable *delegates;
@property (nonatomic, getter=isReachable) char reachable;
@property (nonatomic) char lastInformedReachability;
@property (nonatomic, getter=isInitialized) char initialized;

+ (id)commonReachability;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)_informDelegates;
- (void)_setReachable:(char)a0;
- (void)_updateHandlerForPath:(id)a0;
- (void)setupPathMonitor;

@end
