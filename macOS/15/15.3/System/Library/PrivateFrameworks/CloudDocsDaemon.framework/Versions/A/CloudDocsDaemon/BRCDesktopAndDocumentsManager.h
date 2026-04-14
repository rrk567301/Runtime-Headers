@class NSOperationQueue, NSFileProviderDomain, BRCFPreferencesWrapper;

@interface BRCDesktopAndDocumentsManager : NSObject {
    BRCFPreferencesWrapper *_preferencesWrapper;
    id _cpProfileObserver;
    id _fpDomainObserver;
    NSOperationQueue *_queue;
    BOOL _isDesktopAndDocumentsRestricted;
    NSFileProviderDomain *_lastDomain;
}

@property (copy, nonatomic) id /* block */ desktopAndDocumentsEnabledChanged;
@property (copy, nonatomic) id /* block */ desktopAndDocumentsMDMRestrictionChanged;
@property (readonly, nonatomic) BOOL isDesktopAndDocumentsRestricted;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)resume;
- (void)_preferencesHaveChanged:(id)a0;
- (void)_refreshState;

@end
