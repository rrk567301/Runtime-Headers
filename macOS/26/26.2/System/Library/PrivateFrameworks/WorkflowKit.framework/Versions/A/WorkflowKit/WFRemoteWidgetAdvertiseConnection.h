@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, WFRemoteWidgetAdvertiseConnectionDelegate, OS_nw_listener;

@interface WFRemoteWidgetAdvertiseConnection : NSObject

@property (nonatomic) long long connectionType;
@property (retain, nonatomic) NSObject<OS_nw_listener> *nwListener;
@property (retain, nonatomic) NSMutableSet *connections;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL invalidated;
@property (weak, nonatomic) id<WFRemoteWidgetAdvertiseConnectionDelegate> delegate;

+ (id)startListeningForIncomingConfigurationsWithConnectionType:(long long)a0;

- (void)invalidate;
- (void)_handleNewConnection:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_receiveRequestOnConnection:(id)a0;
- (void)_tearDownConnection:(id)a0;
- (id)initWithConnectionType:(long long)a0;
- (id)setupAdvertiseConnectionType:(long long)a0;

@end
