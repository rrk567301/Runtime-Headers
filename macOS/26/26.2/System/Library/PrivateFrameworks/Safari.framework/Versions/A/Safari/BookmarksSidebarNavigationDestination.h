@class SafariWebBookmarkList;

@interface BookmarksSidebarNavigationDestination : NSObject

@property (readonly, nonatomic) SafariWebBookmarkList *folder;
@property (readonly, nonatomic) long long destinationType;

+ (id)destinationForFolder:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDestinationType:(long long)a0;

@end
