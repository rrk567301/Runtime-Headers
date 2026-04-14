@class NSHashTable, NSMapTable, NSTimer, WBSAutoFillAssociatedDomainsManager, SFAutoFillOneTimeCode, NSObject, IMOneTimeCodeAccelerator;
@protocol OS_dispatch_queue, SFAppAutoFillOneTimeCodeProviderDelegate;

@interface SFAppAutoFillOneTimeCodeProvider : NSObject {
    IMOneTimeCodeAccelerator *_oneTimeCodeAccelerator;
    NSObject<OS_dispatch_queue> *_internalQueue;
    SFAutoFillOneTimeCode *_currentOneTimeCodeFromMessages;
    NSHashTable *_observers;
    NSMapTable *_generatorObservers;
    NSTimer *_generatorTimer;
}

@property (weak, nonatomic) id<SFAppAutoFillOneTimeCodeProviderDelegate> delegate;
@property (retain, nonatomic) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property (readonly, nonatomic) BOOL hasOneTimeCode;

- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithMessagesOneTimeCodeSupport:(BOOL)a0;
- (BOOL)hasOneTimeCodeForAppWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)currentOneTimeCodeWithAuditToken:(struct { unsigned int x0[8]; })a0 website:(id)a1;
- (id)currentOneTimeCodesWithAuditToken:(struct { unsigned int x0[8]; })a0 website:(id)a1 usernameHint:(id)a2 fieldClassification:(long long)a3;
- (id)currentOneTimeCodesForWebBrowserWithWebsiteFrameURLs:(id)a0 fieldClassification:(long long)a1;
- (void)consumeCurrentOneTimeCode;
- (void)consumeMessagesOneTimeCodeWithGUID:(id)a0;
- (void)consumeOneTimeCode:(id)a0;
- (void)addObserver:(id)a0 forOneTimeCode:(id)a1;
- (void)removeObserverForOneTimeCode:(id)a0;
- (void)_processOneTimeCodeFromMessages:(id)a0;
- (void)_validateCurrentOneTimeCode;
- (BOOL)_validateURL:(id)a0 withURLFromOriginBoundCode:(id)a1;
- (BOOL)_appWithAuditTokenIsWebBrowser:(struct { unsigned int x0[8]; })a0;
- (id)_secureURLWithDomain:(id)a0;
- (id)_savedAccountsWithPasswordsForURL:(id)a0;
- (id)_sortedOneTimeCodesFromSavedAccounts:(id)a0;
- (id)_associatedDomainEntriesForAppWithIdentifier:(id)a0;
- (void)_startGeneratorTimer;
- (void)_stopGeneratorTimer;

@end
