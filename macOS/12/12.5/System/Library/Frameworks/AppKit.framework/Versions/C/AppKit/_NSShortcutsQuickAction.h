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
- (id)alternateTitle;
- (void)performWithItemSource:(id)a0;
- (void)loadIconOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)performWithItemSource:(id)a0 alternate:(BOOL)a1;
- (void)loadIconOnQueue:(id)a0 alternate:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)hasAlternate;
- (Class)_validationClass;
- (Class)_preferencesClass;
- (BOOL)hasIcon;
- (BOOL)hasColor;
- (BOOL)needsItemSource;
- (id)initWithContextualAction:(id)a0 alternateContextualAction:(id)a1 presentation:(id)a2;
- (id)contextualAction;

@end
