@class NSArray, NSObject;
@protocol OS_dispatch_queue, _UNNotificationContentExtensionVendorContainer;

@interface _UNNotificationContentExtensionVendorContext : NSExtensionContext <_UNNotificationExtensionVendorInterface, _UNNotificationExtensionHostInterface>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, getter=isQueueInactive) BOOL queueInactive;
@property (nonatomic) BOOL didCheckActionResponseDelegate;
@property (copy, nonatomic) NSArray *notificationActions;
@property (weak, nonatomic) id<_UNNotificationContentExtensionVendorContainer> notificationExtensionContainer;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (void).cxx_destruct;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)_extensionWantsToReceiveActionResponses:(BOOL)a0;
- (void)_extensionWantsToBecomeFirstResponder:(BOOL)a0;
- (void)_extensionDidCompleteNotificationResponse:(id)a0 withOption:(unsigned long long)a1;
- (void)_extensionSetPlayPauseMediaButtonType:(unsigned long long)a0;
- (void)_extensionSetPlayPauseMediaButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_extensionSetPlayPauseMediaButtonColor:(id)a0;
- (void)_extensionMediaPlayingStarted;
- (void)_extensionMediaPlayingPaused;
- (void)_extensionDidUpdatePlayPauseMediaButton;
- (void)_extensionRequestsDefaultAction;
- (void)_extensionRequestsDismiss;
- (void)_extensionDidUpdateTitle:(id)a0;
- (void)_extensionDidUpdateNotificationActions:(id)a0;
- (void)_extensionUpdatedPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_extensionUpdatedContentSize:(struct CGSize { double x0; double x1; })a0 sendRight:(id)a1;
- (void)_hostDidReceiveNotification:(id)a0;
- (void)_hostDidReceiveNotificationResponse:(id)a0;
- (void)_hostDidReceiveNotificationResponse:(id)a0 completionHandler:(id /* block */)a1;
- (void)_hostWantsMediaToPlay;
- (void)_hostWantsMediaToPause;
- (void)_hostWantsToUpdateMediaPlayPauseButton;
- (void)_hostWantsToPreserveInputViews;
- (void)_hostWantsToRestoreInputViews;
- (void)_extensionWantsToUpdateMediaPlayPauseButton;
- (void)_extensionWantsMessagesFromHostDelivered;
- (void)_activateQueueIfNecessary;
- (void)_updateMediaPlayPauseButton;
- (id)_notificationExtension;
- (void)mediaPlayingStarted;
- (void)mediaPlayingPaused;
- (void)performNotificationDefaultAction;
- (void)dismissNotificationContentExtension;
- (void)requestDismiss;

@end
