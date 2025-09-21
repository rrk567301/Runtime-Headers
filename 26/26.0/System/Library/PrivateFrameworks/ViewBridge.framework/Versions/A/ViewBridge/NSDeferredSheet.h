@class NSString, NSXPCListenerEndpoint;

@interface NSDeferredSheet : NSObject

@property (retain) NSXPCListenerEndpoint *listenerEndpoint;
@property (retain) NSString *childIdentifier;
@property (retain) NSString *parentIdentifier;
@property (copy) id /* block */ reply;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) BOOL isCritical;
@property (readonly) unsigned char windowBase;
@property (readonly) unsigned long long styleMask;

- (void)dealloc;
- (id)init:(struct { BOOL x0; struct { unsigned long long x0; unsigned char x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; unsigned int x3; unsigned long long x4; } x1; })a0 childIdentifier:(id)a1 parentIdentifier:(id)a2 listenerEndpoint:(id)a3 withReply:(id /* block */)a4;

@end
