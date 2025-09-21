@class NSString, NSXPCConnection, NEProcessIdentity, NEUserNotification;
@protocol NEExtensionProviderProtocol, NEExtensionProviderHostDelegate;

@interface NEExtensionProviderHostContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol> {
    id<NEExtensionProviderProtocol> _vendorContext;
    NSString *_description;
    NEUserNotification *_notification;
    char _stopped;
    char _isHostingSystemExtension;
    id<NEExtensionProviderHostDelegate> _delegate;
    NEProcessIdentity *_extensionProcessIdentity;
    NSXPCConnection *_vendorConnection;
}

@property (readonly) int requiredEntitlement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)dispose;
- (void)stopWithReason:(int)a0;
- (void)createWithCompletionHandler:(id /* block */)a0;
- (void)displayMessage:(id)a0 message:(id)a1 completionHandler:(id /* block */)a2;
- (void)setConfiguration:(id)a0 extensionIdentifier:(id)a1;
- (void)sleepWithCompletionHandler:(id /* block */)a0;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)startedWithError:(id)a0;
- (void)validateWithCompletionHandler:(id /* block */)a0;
- (void)wake;

@end
