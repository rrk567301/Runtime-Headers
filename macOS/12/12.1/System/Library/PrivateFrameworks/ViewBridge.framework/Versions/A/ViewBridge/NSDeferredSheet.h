@class NSString, NSXPCListenerEndpoint;

@interface NSDeferredSheet : NSObject

@property (retain) NSXPCListenerEndpoint *listenerEndpoint;
@property (retain) NSString *childIdentifier;
@property (retain) NSString *parentIdentifier;
@property (copy) id /* block */ reply;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) BOOL isCritical;

- (void)dealloc;
- (id)remoteView;
- (id)initWithChildIdentifier:(id)a0 parentIdentifier:(id)a1 size:(struct CGSize { double x0; double x1; })a2 isCritical:(BOOL)a3 listenerEndpoint:(id)a4 withReply:(id /* block */)a5;

@end
