@class NSView, NSXPCListenerEndpoint;

@interface ASCPaymentServiceHostBridge : NSObject

@property (nonatomic, readonly) NSView *view;
@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;

+ (id)createPaymentServiceHostBridge;

- (void).cxx_destruct;
- (id)init;

@end
