@class WFContextualAction;

@interface _NSShortcutsQuickAction : _NSQuickAction {
    WFContextualAction *_contextualAction;
    WFContextualAction *_alternateContextualAction;
}

+ (id)quickActionForContextualAction:(id)a0 alternateContextualAction:(id)a1 presentation:(id)a2;

- (void).cxx_destruct;
- (long long)type;
- (id)_bundleURL;
- (id)title;
- (char)needsItemSource;
- (char)hasIcon;
- (id)_iconForContextualAction:(id)a0;
- (Class)_preferencesClass;
- (Class)_validationClass;
- (id)alternateTitle;
- (id)contextualAction;
- (char)hasAlternate;
- (char)hasColor;
- (id)initWithContextualAction:(id)a0 alternateContextualAction:(id)a1 presentation:(id)a2;
- (void)loadISIconOnQueue:(id)a0 alternate:(char)a1 completionHandler:(id /* block */)a2;
- (void)loadISIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadIconOnQueue:(id)a0 alternate:(char)a1 completionHandler:(id /* block */)a2;
- (void)loadIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)performWithItemSource:(id)a0;
- (void)performWithItemSource:(id)a0 alternate:(char)a1;

@end
