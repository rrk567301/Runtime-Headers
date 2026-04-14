@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, AFUIBridgeClientDelegate;

@interface AFUIBridgeClient : NSObject <AFUIBridgeService, AFUIBridgeServiceDelegate> {
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<AFUIBridgeClientDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (id)_connection;
- (oneway void)preheat;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (oneway void)siriDismissed;
- (oneway void)stopAttendingWithReason:(unsigned long long)a0;
- (id)_uiBridgeService;
- (id)_uiBridgeServiceWithErrorHandler:(id /* block */)a0;
- (oneway void)siriPrompted;
- (oneway void)siriWillPrompt;
- (oneway void)startAttending;

@end
