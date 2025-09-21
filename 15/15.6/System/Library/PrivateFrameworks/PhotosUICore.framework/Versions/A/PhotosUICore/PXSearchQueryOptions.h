@interface PXSearchQueryOptions : NSObject <NSCopying>

@property (nonatomic) unsigned long long curatedAssetLimit;
@property (nonatomic) char wantsCuratedAssetsFetchResult;
@property (nonatomic) unsigned long long suggestionLimit;
@property (nonatomic) char wantsLibraryChanges;
@property (nonatomic) unsigned long long filterOptions;
@property (nonatomic) char wantsWordEmbeddings;
@property (nonatomic) unsigned long long libraryScope;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;

@end
