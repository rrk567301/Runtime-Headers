@interface TipKitSignaler : NSObject

+ (void)reportUserOpenedNewTab;
+ (void)reportUserHasMultipleTabs;
+ (void)reportUserPinnedATab;
+ (void)reportUserHasPinnedTabs;
+ (void)reportUserCreatedATabGroup;
+ (void)reportUserHasTabGroups;
+ (void)reportUserSwipedToNavigate;
+ (void)reportUserDidUndoCloseWebPage;
+ (void)reportUserDidReopenWebPage;
+ (void)reportUserInvokedReader;
+ (void)reportUserAddedItemToReadingList;
+ (void)reportUserSavedReadingListItemForOffline;
+ (void)reportUserHasReadingListItems;
+ (void)reportUserHasOfflineReadingListItems;
+ (void)reportUserTranslatedAWebPage;
+ (void)reportUserSearchedInTabOverview;

@end
