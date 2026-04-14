@protocol _NSServiceAction;

@interface _NSLegacyServiceQuickAction : _NSQuickAction

@property (readonly) id<_NSServiceAction> _legacyServiceAction;

+ (id)quickActionForPresentation:(id)a0 serviceAction:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (long long)type;
- (id)_bundleURL;
- (id)title;
- (void)performWithItemSource:(id)a0;
- (void)loadIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadISIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadISIconOnQueue:(id)a0 alternate:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)loadTouchBarIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadColorOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canRevealInFinder;
- (BOOL)canMoveToTrash;
- (BOOL)canRevealInShortcuts;
- (BOOL)revealInShortcutsAndReturnError:(id *)a0;
- (Class)_validationClass;
- (Class)_preferencesClass;
- (BOOL)hasIcon;
- (BOOL)hasColor;
- (BOOL)needsItemSource;
- (id)initForPresentation:(id)a0 legacyServiceAction:(id)a1;

@end
