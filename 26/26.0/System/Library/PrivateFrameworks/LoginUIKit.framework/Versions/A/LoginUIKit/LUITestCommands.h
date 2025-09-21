@class NSMutableArray;

@interface LUITestCommands : NSObject

@property (retain) NSMutableArray *observers;

+ (id)sharedTestCommands;

- (void)_handleNotification:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 handler:(id /* block */)a1;
- (void)performCommand:(long long)a0 withPayload:(id)a1;

@end
