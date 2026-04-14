@class NSString;
@protocol MOCancellable;

@interface WBSManagedBookmarksController : NSObject {
    id<MOCancellable> _managedBookmarksSubscription;
}

@property (readonly, nonatomic) NSString *topLevelBookmarksFolderTitle;

- (id)init;
- (id)managedBookmarks;
- (void).cxx_destruct;
- (void)dealloc;

@end
