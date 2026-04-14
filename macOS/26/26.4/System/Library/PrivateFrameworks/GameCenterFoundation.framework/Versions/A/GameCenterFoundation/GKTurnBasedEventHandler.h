@class NSObject;
@protocol OS_dispatch_queue, GKTurnBasedEventHandlerDelegate;

@interface GKTurnBasedEventHandler : NSObject

@property (nonatomic) BOOL didBecomeActive;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lookForEventQueue;
@property (weak) NSObject<GKTurnBasedEventHandlerDelegate> *delegate;

+ (id)sharedTurnBasedEventHandler;

- (void).cxx_destruct;
- (id)init;
- (void)callTurnEventForMatch:(id)a0 userTapped:(BOOL)a1;
- (void)lookForEvent;

@end
