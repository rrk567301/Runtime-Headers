@class NSString;
@protocol MOCancellable;

@interface WBSManagedBookmarksController : NSObject {
    id<MOCancellable> _managedBookmarksSubscription;
}

@property (readonly, nonatomic) NSString *topLevelBookmarksFolderTitle;

- (void)dealloc;
- (id)managedBookmarks;
- (void).cxx_destruct;
- (id)init;

@end
