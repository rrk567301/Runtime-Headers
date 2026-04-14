@class NSMutableArray;

@interface LUITestCommands : NSObject

@property (retain) NSMutableArray *observers;

+ (id)sharedTestCommands;

- (void).cxx_destruct;
- (id)init;
- (void)_handleNotification:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0 handler:(id /* block */)a1;
- (void)performCommand:(long long)a0 withPayload:(id)a1;

@end
