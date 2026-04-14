@class BrowserWindowTabView, NSArray, WBSTabOrderManager, NSString, BrowserTabViewItem;
@protocol WBSOrderedTab, BrowserWindowTabViewControllerDelegate;

@interface BrowserWindowTabViewController : NSTabViewController <WBSTabOrderProvider> {
    BOOL _isAddingOrRemovingTabViewItem;
    BOOL _didSetUpTabView;
}

@property (weak, nonatomic) id<BrowserWindowTabViewControllerDelegate> delegate;
@property (retain) BrowserWindowTabView *tabView;
@property (readonly, nonatomic) long long numberOfTabViewItems;
@property (retain, nonatomic) BrowserTabViewItem *selectedTabViewItem;
@property (readonly, nonatomic) BOOL hasPinnedTabViewItems;
@property (readonly, nonatomic) long long numberOfPinnedTabViewItems;
@property (readonly, copy, nonatomic) NSArray *pinnedTabViewItems;
@property (readonly, nonatomic) WBSTabOrderManager *tabOrderManager;
@property (readonly, nonatomic) unsigned long long indexOfSelectedTab;
@property (readonly, nonatomic) id<WBSOrderedTab> selectedTabForTabOrderProvider;
@property (readonly, nonatomic) unsigned long long numberOfTabs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (id)tabView;
- (long long)indexOfTabViewItem:(id)a0;
- (id)tabViewItemAtIndex:(long long)a0;
- (void)insertTabViewItem:(id)a0 atIndex:(long long)a1;
- (void)removeTabViewItem:(id)a0;
- (void)setSelectedTabViewItemIndex:(long long)a0;
- (id)tabAtIndex:(unsigned long long)a0;
- (unsigned long long)indexForTab:(id)a0;
- (id)originatingTabForTab:(id)a0;
- (void)_setUpTabView;
- (id)tabViewItemWithUUID:(id)a0;
- (id)tabViewItemWithIdForWebExtensions:(double)a0;
- (id)firstTabViewItemWithUnsavedCredentialsPassingTest:(id /* block */)a0;
- (id)tabViewItemsWithUnsubmittedFormTextPassingTest:(id /* block */)a0;
- (id)firstNonClosedAncestorForTab:(id)a0;

@end
