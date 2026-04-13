@class EFCancelationToken, NSArray, NSString, MEAppExtensionsController, NSObject, EFLocked;
@protocol OS_os_log;

@interface EDMessageActionHandler : NSObject <MEAppExtensionsObserver, EFLoggable> {
    MEAppExtensionsController *_extensionsController;
    EFLocked *_remoteExtensions;
    EFCancelationToken *_extensionsObserverCancelable;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSArray *messageActionProviders;
@property (readonly, copy, nonatomic) NSArray *requiredHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithExtensionsController:(id)a0;
- (void)extensionsMatched:(id)a0;
- (void)extensionsNoLongerMatching:(id)a0;
- (BOOL)_extensionsEnabled;
- (id)actionProviderInterfacesByExtensionID;
- (id)actionDecisionForMessage:(id)a0 usingMessageActionProvider:(id)a1;

@end
