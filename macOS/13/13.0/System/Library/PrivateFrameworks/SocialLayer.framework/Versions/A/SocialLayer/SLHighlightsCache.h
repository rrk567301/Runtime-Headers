@class NSMutableDictionary, SLInteractionHandler, NSHashTable, NSString, NSObject, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SLHighlightsCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *highlightsCache;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) SLInteractionHandler *interactionHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *threadSafePropertyQueue;
@property (copy, nonatomic) id /* block */ updateHighlightsBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *initialFetchGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initialFetchWaitingQueue;
@property (readonly, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) int notificationTokenRefreshHighlights;
@property (readonly, nonatomic) int notificationTokenScreenTimeChange;
@property (readonly, nonatomic) int notificationTokenDeleteHighlights;
@property (readonly, copy, nonatomic) NSArray *highlights;

+ (id)sharedCache;
+ (id)highlightFetchQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)_registerNotifications;
- (void)setHighlights:(id)a0;
- (void)updateHighlights;
- (void)runAfterInitialFetch:(id /* block */)a0 onQueue:(id)a1;
- (void)didDeleteHighlightsOrAttributions;
- (void)_notifyDelegatesWithNotificationType:(long long)a0 withHighlights:(id)a1;
- (void)fetchHighlightsWithLimit:(unsigned long long)a0 variant:(id)a1 completionBlock:(id /* block */)a2;
- (void)_leaveInitialFetchGroupIfNecessary;

@end
