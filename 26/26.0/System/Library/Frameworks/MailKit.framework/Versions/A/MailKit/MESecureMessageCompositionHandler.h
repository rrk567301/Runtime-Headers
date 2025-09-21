@class NSString, MEAppExtensionsController, EFManualCancelationToken, EFPromise, EFLocked;
@protocol MEMessageEncoder, EFScheduler;

@interface MESecureMessageCompositionHandler : NSObject <MEAppExtensionsObserver, MEMessageEncoder> {
    MEAppExtensionsController *_extensionsController;
    EFLocked *_remoteExtensions;
    EFManualCancelationToken *_extensionsObserverCancelable;
    id<EFScheduler> _requestScheduler;
}

@property (retain, nonatomic) id<MEMessageEncoder> smimeImplementation;
@property (retain, nonatomic) id<MEMessageEncoder> encryptedMailImplementation;
@property (readonly, nonatomic) MEAppExtensionsController *extensionController;
@property (retain) EFPromise *messageEncoderExtensionPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void)dealloc;
- (void).cxx_destruct;
- (void)extensionsMatched:(id)a0;
- (void)extensionsNoLongerMatching:(id)a0;
- (void)encodeMessage:(id)a0 composeContext:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_isEncryptedMailSupportedForEmailAddress:(id)a0;
- (id)_securityImplementationForSender:(id)a0 completionHandler:(id /* block */)a1 isStatus:(BOOL)a2;
- (id)_wrappedErrorForError:(id)a0 extensionIdentifier:(id)a1 isErrorHandler:(BOOL)a2;
- (void)getEncodingStatusForMessage:(id)a0 composeContext:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithSMIMEImplementation:(id)a0 encryptedMailImplementation:(id)a1 extensionsController:(id)a2;
- (id)initWithSMIMEImplementation:(id)a0 extensionsController:(id)a1;

@end
