@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface WPDState : NSObject

@property long long state;
@property BOOL restricted;
@property (weak) NSObject<OS_dispatch_queue> *cbQueue;
@property (weak) id /* block */ notification;
@property (retain) NSMutableSet *cbManagers;
@property (retain) NSMutableDictionary *cbStates;
@property BOOL initialUpdate;

+ (long long)getWPStateFromCBManagerState:(long long)a0;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)updateWithCompletion:(id /* block */)a0;
- (void)registerManager:(id)a0;
- (id)description;
- (void)updateWithManager:(id)a0 Completion:(id /* block */)a1;
- (void)coalesceState:(long long *)a0 Restricted:(BOOL *)a1 UpdateCache:(BOOL)a2;
- (void).cxx_destruct;

@end
