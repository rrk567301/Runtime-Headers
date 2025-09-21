@class SafariWebBookmarkList, SafariWebBookmark;

@interface BookmarkRemovalUndoInfo : NSObject

@property (readonly, retain, nonatomic) SafariWebBookmark *bookmark;
@property (readonly, retain, nonatomic) SafariWebBookmarkList *parent;
@property (readonly, nonatomic) unsigned long long index;

+ (id)infoWithBookmark:(id)a0;

- (id)init;
- (id)initWithBookmark:(id)a0;
- (void).cxx_destruct;

@end
