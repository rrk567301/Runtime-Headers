@class SafariWebBookmarkList, NSDictionary, SHA256Hash;

@interface _LoadingBookmarkInfo : NSObject

@property (retain, nonatomic) SafariWebBookmarkList *topBookmark;
@property (copy, nonatomic) NSDictionary *syncData;
@property (readonly, nonatomic) SHA256Hash *stateHash;
@property (copy, nonatomic) SHA256Hash *currentBookmarkStateHash;

- (void).cxx_destruct;

@end
