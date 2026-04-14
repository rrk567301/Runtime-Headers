@class NSArray, BMStoreBookmark;

@interface BMIndexRow : NSObject

@property (readonly, nonatomic) NSArray *indexFields;
@property (readonly, nonatomic) BMStoreBookmark *storeBookmark;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIndexFields:(id)a0 storeBookmark:(id)a1;

@end
