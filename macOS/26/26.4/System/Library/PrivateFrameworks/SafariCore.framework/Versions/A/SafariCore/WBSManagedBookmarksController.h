@class NSString;
@protocol MOCancellable;

@interface WBSManagedBookmarksController : NSObject {
    id<MOCancellable> _managedBookmarksSubscription;
}

@property (readonly, nonatomic) NSString *topLevelBookmarksFolderTitle;

- (void).cxx_destruct;
- (id)init;
- (id)managedBookmarks;
- (void)dealloc;

@end
