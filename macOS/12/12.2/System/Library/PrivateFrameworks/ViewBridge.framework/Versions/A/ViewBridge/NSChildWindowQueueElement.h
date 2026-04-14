@class NSString, NSXPCListenerEndpoint;

@interface NSChildWindowQueueElement : NSObject {
    NSString *_identifier;
    id /* block */ _reply;
    NSXPCListenerEndpoint *_listenerEndpoint;
    struct { BOOL sharesParentKeyState; struct { unsigned char base; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect; unsigned int id; unsigned long long styleMask; } window; } _parameters;
}

- (void)dealloc;
- (id)initWithIdentifier:(id)a0 parameters:(const struct { BOOL x0; struct { unsigned char x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned long long x3; } x1; } *)a1 listenerEndpoint:(id)a2 reply:(id /* block */)a3;

@end
