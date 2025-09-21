@class NSString, MEAppExtensionsController, MEComposeSession, EFManualCancelationToken, NSObject, EFLocked;
@protocol MEMailComposeExtensionDelegate, OS_dispatch_queue;

@interface MEComposeExtensionsHelper : NSObject <MEAppExtensionsObserver, MEMailComposeExtensionHostDelegate, MEMailComposeAppExtensionsRequestDispatcher> {
    MEComposeSession *_composeSession;
    MEAppExtensionsController *_extensionsController;
    EFLocked *_remoteExtensions;
    EFManualCancelationToken *_extensionsObserverCancelable;
    NSObject<OS_dispatch_queue> *_extensionRequestDispatcherQueue;
    EFLocked *_shouldPerformSendValidationMap;
}

@property (weak, nonatomic) id<MEMailComposeExtensionDelegate> extensionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void)dealloc;
- (void).cxx_destruct;
- (void)extensionsMatched:(id)a0;
- (void)extensionsNoLongerMatching:(id)a0;
- (void)_dispatchMailComposeSessionDidBeginForExtensions:(id)a0;
- (void)appExtensionViewControllerForExtensionIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)dispatchEmailAddressTokenIconRequestsForMailMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)getAdditionalHeadersForMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithComposeSession:(id)a0 extensionsController:(id)a1 iconReloader:(id)a2;
- (void)performSendValidationForMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)regenerateEmailAddressTokenChangesForSession:(id)a0 forContextUUID:(id)a1;
- (void)regenerateSecurityStatusInformationForSession:(id)a0 forContextUUID:(id)a1;
- (BOOL)shouldPerformSendValidation;

@end
