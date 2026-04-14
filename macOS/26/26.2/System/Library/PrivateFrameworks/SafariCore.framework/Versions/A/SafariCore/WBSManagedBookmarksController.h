@class NSString;
@protocol MOCancellable;

@interface WBSManagedBookmarksController : NSObject {
    id<MOCancellable> _managedBookmarksSubscription;
}

@property (readonly, nonatomic) NSString *topLevelBookmarksFolderTitle;

- (id)managedBookmarks;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
