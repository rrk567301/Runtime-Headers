@class NSPreference, NSTabViewItem, NSTabView;

@interface NSPrefTabsController : NSObject {
    NSTabView *tabView;
    NSPreference *parentLayout;
    NSTabViewItem *fTabViewItemToSwitchTo;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)tabViewItems;
- (BOOL)tabView:(id)a0 shouldSelectTabViewItem:(id)a1;
- (void)tabView:(id)a0 willSelectTabViewItem:(id)a1;
- (void)tabView:(id)a0 didSelectTabViewItem:(id)a1;
- (void)didHide;
- (void)didSelect;
- (void)didUnselect;
- (void)willSelect;
- (void)willUnselect;
- (void)didBecomeActive;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)didResignActive;
- (unsigned long long)shouldUnselect;
- (void)willHide;
- (void)willUnhide;
- (void)didUnhide;
- (BOOL)isLayoutLoadedForTabViewItem:(id)a0;
- (id)layoutForTabViewItem:(id)a0;
- (id)selectedLayoutObject;
- (void)finishPaneSwitch:(id)a0;
- (void)cancelPaneSwitch:(id)a0;
- (void)setPrefs:(id)a0 lastSelected:(id)a1;
- (void)setUpTabViewItemKeyViews:(id)a0 layout:(id)a1;
- (void)setPrefs:(id)a0;
- (void)selectTabWithIdentifier:(id)a0;

@end
