@class NSXPCListener, NSObject, _ListenerDelegate;
@protocol OS_dispatch_queue;

@interface CNContactPosterDataService : NSObject

@property (readonly) NSXPCListener *listener;
@property (readonly) _ListenerDelegate *listenerDelegate;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (void)beginListening;
- (void)invalidate;
- (void).cxx_destruct;
- (id)init;
- (id)initWithListener:(id)a0 store:(id)a1;

@end
