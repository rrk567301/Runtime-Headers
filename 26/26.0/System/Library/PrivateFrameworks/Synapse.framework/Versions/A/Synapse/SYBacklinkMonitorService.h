@class NSXPCListener, NSMutableDictionary, SYNotesActivationObserver, NSMutableOrderedSet, NSString, NSObject, SYBacklinkMonitorOperation;
@protocol OS_dispatch_queue, OS_os_transaction, SYBacklinkMonitorServiceTestingDelegate;

@interface SYBacklinkMonitorService : NSObject <NSXPCListenerDelegate, SYBacklinkMonitorOperationDelegate, SYBacklinkMonitorServiceHandleDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_serviceQueue;
@property (retain, nonatomic) NSXPCListener *_listener;
@property (retain, nonatomic) NSObject<OS_os_transaction> *_keepAliveTransaction;
@property (retain, nonatomic) SYNotesActivationObserver *_notesObserver;
@property (retain, nonatomic) NSMutableDictionary *_handles;
@property (retain, nonatomic) SYBacklinkMonitorOperation *_activeOperation;
@property (retain, nonatomic) SYBacklinkMonitorOperation *_longerLivedOperation;
@property (retain, nonatomic) NSMutableOrderedSet *_pendingOperations;
@property (readonly, nonatomic) BOOL _forTesting;
@property (weak, nonatomic) id<SYBacklinkMonitorServiceTestingDelegate> testingDelegate;
@property (readonly, nonatomic) BOOL hasKeepAliveTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginListeningToConnections;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initForTesting:(BOOL)a0;
- (void)dealloc;
- (void)_evaluateAndBeginPendingOperations;
- (id)_listenerEndpoint;
- (id)init;
- (void)backlinkMonitorOperationDidFinish:(id)a0;
- (void)_createAndScheduleOperationForHandle:(id)a0 withUserActivity:(id)a1 context:(id)a2;
- (void)handleDidDisconnect:(id)a0;
- (void)_updateKeepAliveTransaction;
- (void)_notesActivationDidChange:(BOOL)a0;
- (void)backlinkMonitorOperation:(id)a0 shouldUpdateFilterCache:(id)a1;
- (void).cxx_destruct;
- (void)scheduleOperationForHandle:(id)a0 withUserActivity:(id)a1 context:(id)a2;

@end
