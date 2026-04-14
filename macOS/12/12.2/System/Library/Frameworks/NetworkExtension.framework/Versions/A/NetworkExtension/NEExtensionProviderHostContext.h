@class NSString, NSXPCConnection, NEProcessIdentity, NEUserNotification;
@protocol NEExtensionProviderHostDelegate, NEExtensionProviderProtocol;

@interface NEExtensionProviderHostContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol> {
    id<NEExtensionProviderProtocol> _vendorContext;
    NSString *_description;
    NEUserNotification *_notification;
}

@property (nonatomic) BOOL stopped;
@property (readonly, nonatomic) NSXPCConnection *vendorConnection;
@property (readonly, nonatomic) BOOL isHostingSystemExtension;
@property (retain) NEProcessIdentity *extensionProcessIdentity;
@property (weak) id<NEExtensionProviderHostDelegate> delegate;
@property (readonly) int requiredEntitlement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)dispose;
- (void)sleepWithCompletionHandler:(id /* block */)a0;
- (void)wake;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)createWithCompletionHandler:(id /* block */)a0;
- (void)setConfiguration:(id)a0 extensionIdentifier:(id)a1;
- (void)stopWithReason:(int)a0;
- (void)validateWithCompletionHandler:(id /* block */)a0;
- (void)startedWithError:(id)a0;
- (void)displayMessage:(id)a0 message:(id)a1 completionHandler:(id /* block */)a2;
- (id)vendorContext;
- (void)setDescription:(id)a0;
- (id)copyValueForEntitlement:(id)a0;
- (BOOL)isSignedWithDeveloperID;
- (id)initWithVendorEndpoint:(id)a0 processIdentity:(id)a1 delegate:(id)a2;
- (BOOL)deriveProcessIdentity;

@end
