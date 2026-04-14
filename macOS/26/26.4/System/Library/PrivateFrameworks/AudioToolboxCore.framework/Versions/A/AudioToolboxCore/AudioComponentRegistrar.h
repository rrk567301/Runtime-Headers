@class NSString;

@interface AudioComponentRegistrar : NSObject <NSXPCListenerDelegate>

@property (readonly, nonatomic) void *impl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initForMode:(BOOL)a0;
- (void)resumeListeners;
- (id)replaceListener:(id)a0 withListener:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;

@end
