@class NSString, SYNotesActivationObserver, SYLinkContextClient, NSCache;
@protocol WBSSystemNoteTakingControllerDelegate;

@interface WBSSystemNoteTakingController : NSObject <SYLinkContextClientDelegate> {
    SYLinkContextClient *_linkContextClient;
    NSCache *_cachedCanonicalURLStringForWebPageURLString;
    SYNotesActivationObserver *_notesActivationObserver;
}

@property (readonly, nonatomic, getter=_isSystemNoteTakingEnabledForSafari) char systemNoteTakingEnabledForSafari;
@property (weak, nonatomic) id<WBSSystemNoteTakingControllerDelegate> delegate;
@property (readonly, nonatomic) char isNotesPIPVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)applyHighlightInUserActivity:(id)a0 webView:(id)a1;
- (void)fetchHighlightsForUserActivity:(id)a0 privateBrowsing:(char)a1 completion:(id /* block */)a2;
- (char)isNoteTakingSupportedForURL:(id)a0;
- (char)isNoteTakingSupportedWithPrivateBrowsing:(char)a0;
- (void)saveHighlightsData:(id)a0 selectedText:(id)a1 selectedImage:(id)a2 newGroup:(char)a3 originatedInApp:(char)a4 webView:(id)a5 userActivity:(id)a6;
- (id)userActivityForNoteTaking:(id)a0;
- (void)_insertLinkContextInfo:(id)a0 userActivity:(id)a1;
- (void)_insertLinkContextPreview:(id)a0 userActivity:(id)a1;
- (char)_isSystemNoteTakingEnabled;
- (void)_setUpNotesVisibilityObserver;
- (void)_updateNotesPIPVisibility:(char)a0;
- (void)cacheCanonicalURL:(id)a0 forWebPageURL:(id)a1;
- (void)insertCanonicalURLIfAvailableForUserActivity:(id)a0;
- (void)userWillAddLinkWithActivity:(id)a0 completion:(id /* block */)a1;

@end
