@class SafariWebBookmarkList, NSError;

@interface WebBookmarkImporter : NSObject

@property (readonly, nonatomic) SafariWebBookmarkList *topBookmark;
@property (readonly, nonatomic) NSError *error;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)unescapeHTML:(id)a0;

@end
