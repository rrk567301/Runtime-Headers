@class NSView, NSXPCListenerEndpoint;

@interface ASCPaymentServiceHostBridge : NSObject

@property (nonatomic, readonly) NSView *view;
@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;

+ (id)createPaymentServiceHostBridge;

- (id)init;
- (void).cxx_destruct;

@end
