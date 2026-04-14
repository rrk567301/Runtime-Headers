@class NSArray, BMStoreBookmark;

@interface BMIndexRow : NSObject

@property (readonly, nonatomic) NSArray *indexFields;
@property (readonly, nonatomic) BMStoreBookmark *storeBookmark;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIndexFields:(id)a0 storeBookmark:(id)a1;

@end
