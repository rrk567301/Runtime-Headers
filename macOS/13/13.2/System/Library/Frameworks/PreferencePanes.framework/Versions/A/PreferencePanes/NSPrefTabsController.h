@class NSPreference, NSTabViewItem, NSTabView;

@interface NSPrefTabsController : NSObject {
    NSTabView *tabView;
    NSPreference *parentLayout;
    NSTabViewItem *fTabViewItemToSwitchTo;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)tabView:(id)a0 shouldSelectTabViewItem:(id)a1;
- (void)tabView:(id)a0 willSelectTabViewItem:(id)a1;
- (void)tabView:(id)a0 didSelectTabViewItem:(id)a1;
- (id)tabViewItems;
- (void)didHide;
- (void)didSelect;
- (void)didUnselect;
- (void)willSelect;
- (void)willUnselect;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)willBecomeActive;
- (void)didResignActive;
- (unsigned long long)shouldUnselect;
- (void)willHide;
- (void)willUnhide;
- (void)didUnhide;
- (void)finishPaneSwitch:(id)a0;
- (void)cancelPaneSwitch:(id)a0;
- (void)setPrefs:(id)a0;
- (void)setPrefs:(id)a0 lastSelected:(id)a1;
- (void)selectTabWithIdentifier:(id)a0;
- (id)selectedLayoutObject;
- (BOOL)isLayoutLoadedForTabViewItem:(id)a0;
- (id)layoutForTabViewItem:(id)a0;
- (void)setUpTabViewItemKeyViews:(id)a0 layout:(id)a1;

@end
