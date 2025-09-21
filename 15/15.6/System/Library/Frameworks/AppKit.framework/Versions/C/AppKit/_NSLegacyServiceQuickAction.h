@protocol _NSServiceAction;

@interface _NSLegacyServiceQuickAction : _NSQuickAction

@property (readonly) id<_NSServiceAction> _legacyServiceAction;

+ (id)quickActionForPresentation:(id)a0 serviceAction:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (long long)type;
- (id)_bundleURL;
- (id)title;
- (char)needsItemSource;
- (char)hasIcon;
- (Class)_preferencesClass;
- (Class)_validationClass;
- (char)canMoveToTrash;
- (char)canRevealInFinder;
- (char)canRevealInShortcuts;
- (char)hasColor;
- (id)initForPresentation:(id)a0 legacyServiceAction:(id)a1;
- (void)loadColorOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadISIconOnQueue:(id)a0 alternate:(char)a1 completionHandler:(id /* block */)a2;
- (void)loadISIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadTouchBarIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)performWithItemSource:(id)a0;
- (char)revealInShortcutsAndReturnError:(id *)a0;

@end
