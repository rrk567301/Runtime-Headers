@class NSString, NSUserNotification;

@interface NCNotificationExtensionContext : NSExtensionContext <NCRemoteViewExtensionContextProtocol>

@property (readonly) NSUserNotification *notification;
@property (weak, nonatomic) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)hostInterface;
+ (id)serviceInterface;

- (char)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)setNotification:(id)a0;
- (void)closeNotificationWithActivation:(long long)a0 actionIdentifier:(id)a1;

@end
