@class SafariWebBookmarkList;

@interface BookmarksSidebarNavigationDestination : NSObject

@property (readonly, nonatomic) SafariWebBookmarkList *folder;
@property (readonly, nonatomic) long long destinationType;

+ (id)destinationForFolder:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDestinationType:(long long)a0;

@end
