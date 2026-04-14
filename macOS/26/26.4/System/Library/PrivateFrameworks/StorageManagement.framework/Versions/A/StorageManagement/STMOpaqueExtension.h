@class NSString, NSExtension, STMHostExtensionContext;

@interface STMOpaqueExtension : NSObject <NSXPCListenerDelegate>

@property (retain) NSExtension *underlyingExtension;
@property (retain, nonatomic) STMHostExtensionContext *context;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithExtension:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)processInputItems:(id)a0 completionHandler:(id /* block */)a1;

@end
