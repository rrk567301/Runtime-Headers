@class NSString, NSXPCListener, NSMutableArray;
@protocol CMFallDetectionServerDelegate;

@interface CMFallDetectionServer : NSObject <CMFallDetectionServerXPC, NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionsLock;
    NSMutableArray *_connections;
}

@property (weak, nonatomic) id<CMFallDetectionServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_addConnection:(id)a0;
- (void)_removeConnection:(id)a0;
- (void)appDidRequestFallDetectionPrompt;
- (void)appDidFinishProcessingEventWithDuration:(double)a0;
- (void)clientDidStart;
- (void)didHideFallDetectionPromptForProcessID:(int)a0;

@end
