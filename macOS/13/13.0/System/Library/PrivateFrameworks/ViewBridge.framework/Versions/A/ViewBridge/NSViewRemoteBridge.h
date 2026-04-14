@class NSRemoteView;

@interface NSViewRemoteBridge : NSViewBridge

@property (readonly) NSRemoteView *remoteView;

- (void)dealloc;
- (int)processIdentifier;
- (struct { unsigned int x0[8]; })auditToken;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)registerKey:(id)a0 defaultObject:(id)a1 owner:(unsigned char)a2;
- (id)initWithRemoteView:(id)a0;

@end
