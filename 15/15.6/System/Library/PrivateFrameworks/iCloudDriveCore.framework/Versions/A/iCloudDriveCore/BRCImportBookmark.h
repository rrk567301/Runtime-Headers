@class BRCItemID, BRMangledID;

@interface BRCImportBookmark : NSObject

@property (readonly, nonatomic) BRCItemID *itemID;
@property (readonly, nonatomic) BRMangledID *mangledID;
@property (readonly, nonatomic) char isTrashBookmark;

+ (id)extractBookmarkDataFromTemplateItem:(id)a0 isTrashBookmark:(char *)a1;

- (void).cxx_destruct;
- (id)initWithBookmarkData:(id)a0 isTrashBookmark:(char)a1 session:(id)a2;

@end
