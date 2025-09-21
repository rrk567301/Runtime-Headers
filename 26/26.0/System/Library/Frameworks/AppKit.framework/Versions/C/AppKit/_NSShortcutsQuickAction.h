@class WFContextualAction;

@interface _NSShortcutsQuickAction : _NSQuickAction {
    WFContextualAction *_contextualAction;
    WFContextualAction *_alternateContextualAction;
}

+ (id)quickActionForContextualAction:(id)a0 alternateContextualAction:(id)a1 presentation:(id)a2;

- (BOOL)hasIcon;
- (id)_bundleURL;
- (long long)type;
- (id)title;
- (void).cxx_destruct;
- (BOOL)needsItemSource;
- (id)_iconForContextualAction:(id)a0;
- (Class)_preferencesClass;
- (Class)_validationClass;
- (id)alternateTitle;
- (id)contextualAction;
- (BOOL)hasAlternate;
- (BOOL)hasColor;
- (id)initWithContextualAction:(id)a0 alternateContextualAction:(id)a1 presentation:(id)a2;
- (void)loadISIconOnQueue:(id)a0 alternate:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)loadISIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadIconOnQueue:(id)a0 alternate:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)loadIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)performWithItemSource:(id)a0;
- (void)performWithItemSource:(id)a0 alternate:(BOOL)a1;

@end
