@class NSString, NSDate;

@interface MPModelGenre : MPModelObject

@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *libraryAddedDate;

+ (id)__artworkCatalogBlock_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)kindWithAlbumKind:(id)a0;
+ (id)__name_KEY;
+ (long long)genericObjectType;

- (id)humanDescription;
- (id)artworkCatalog;

@end
