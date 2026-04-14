@interface TipKitSignaler : NSObject

+ (void)reportUserSwipedToNavigate;
+ (void)reportUserPinnedATab;
+ (void)reportUserOpenedNewTab;
+ (void)reportUserInvokedReader;
+ (void)reportUserTranslatedAWebPage;
+ (void)reportUserHasMultipleTabs;
+ (void)reportUserHasPinnedTabs;
+ (void)reportUserDidReopenWebPage;
+ (void)reportUserDidUndoCloseWebPage;
+ (void)reportUserAddedItemToReadingList;
+ (void)reportUserHasReadingListItems;
+ (void)reportUserSearchedInTabOverview;

@end
