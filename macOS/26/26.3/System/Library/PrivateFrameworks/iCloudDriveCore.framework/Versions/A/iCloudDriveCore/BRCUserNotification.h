@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface BRCUserNotification : NSObject <BRCUserNotifier> {
    struct __CFUserNotification { } *_cfUserNotification;
    struct __CFRunLoopSource { } *_source;
    NSObject<OS_dispatch_source> *_displaySource;
    unsigned long long _nextDisplayBeginTime;
    id _progressSubscriber;
    NSMutableDictionary *_dialogInfo;
    BOOL _skipDialogs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultInstance;

- (void)_displayDialogWithType:(unsigned long long)a0 dict:(id)a1 userReplyBlock:(id /* block */)a2;
- (void)showJoinDialogForShareMetadata:(id)a0 ckContainer:(id)a1 reply:(id /* block */)a2;
- (void)close;
- (void)showErrorDeviceOfflineForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)showDefaultErrorForRequestAccessWithReply:(id /* block */)a0;
- (id)_iCloudDriveIconURL;
- (id)init;
- (void)_hideCurrentDialog;
- (void)_displayDialogWithType:(unsigned long long)a0 dict:(id)a1 options:(id)a2 userReplyBlock:(id /* block */)a3;
- (void)showErrorVolumeNotSupportedWithReason:(unsigned long long)a0;
- (void)showErrorParticipantLimitReachedForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)showErrorInstallNativeAppForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)showErrorTurnOniCloudDriveForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)showJoinDialogForDocumentName:(id)a0 url:(id)a1 ownerDisplayName:(id)a2 ckContainer:(id)a3 isPublicShare:(BOOL)a4 reply:(id /* block */)a5;
- (void)showErrorParticipantLimitReachedForType:(id)a0 reply:(id /* block */)a1;
- (void)skipDialogs;
- (id /* block */)_logWrapUserReplyBlock:(id /* block */)a0;
- (void)showErrorItemUnavailableOrAccessRestrictedForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)showErrorServerNotReachableForType:(id)a0 reply:(id /* block */)a1;
- (void)showErrorServerNotReachableForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)showErrorSignInToiCloudForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)showErrorNativeAppDisabledByProfileForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (void)showCloudDocsNotSupportedSimulatorRunningOnOldHost;
- (void)showErrorDocumentsAppNotVisibleForShareURL:(id)a0 reply:(id /* block */)a1;
- (void)moveToFront;
- (void)showErrorItemUnavailableOrAccessRestrictedForType:(id)a0 reply:(id /* block */)a1;
- (void)_showJoinDialogWithDocumentName:(id)a0 isPublicShare:(BOOL)a1 ckContainer:(id)a2 ownerDisplayName:(id)a3 isFolderShare:(BOOL)a4 appName:(id)a5 reply:(id /* block */)a6;
- (void)showErrorReasonUnknownForShareMetadata:(id)a0 reply:(id /* block */)a1;
- (void)showErrorDeviceOfflineForType:(id)a0 reply:(id /* block */)a1;
- (void)_updateDialogWithType:(unsigned long long)a0 dict:(id)a1 userReplyBlock:(id /* block */)a2;
- (void)_updateDialogWithType:(unsigned long long)a0 dict:(id)a1;

@end
