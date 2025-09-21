@class NSURL, _NSQuickActionPresentation, NSString;

@interface _NSQuickAction : NSObject

@property (readonly) char canRevealInFinder;
@property (readonly) char canMoveToTrash;
@property (readonly) char canRevealInShortcuts;
@property (readonly) _NSQuickActionPresentation *_presentation;
@property (readonly) Class _validationClass;
@property (readonly) Class _preferencesClass;
@property (readonly, copy) NSURL *_bundleURL;
@property (readonly) long long type;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *alternateTitle;
@property (readonly) char hasIcon;
@property (readonly) char hasColor;
@property (readonly, copy) NSString *identifier;
@property (readonly) char needsItemSource;
@property (readonly) char hasAlternate;

- (id)init;
- (void).cxx_destruct;
- (id)initForPresentation:(id)a0 identifier:(id)a1;
- (void)loadColorOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadISIconOnQueue:(id)a0 alternate:(char)a1 completionHandler:(id /* block */)a2;
- (void)loadISIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadIconOnQueue:(id)a0 alternate:(char)a1 completionHandler:(id /* block */)a2;
- (void)loadIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadTouchBarIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (char)moveToTrashAndReturnError:(id *)a0;
- (void)performWithItemSource:(id)a0;
- (void)performWithItemSource:(id)a0 alternate:(char)a1;
- (char)revealInFinderAndReturnError:(id *)a0;
- (char)revealInShortcutsAndReturnError:(id *)a0;

@end
