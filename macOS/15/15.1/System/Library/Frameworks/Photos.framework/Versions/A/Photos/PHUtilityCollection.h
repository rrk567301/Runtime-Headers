@interface PHUtilityCollection : PHAssetCollection

@property (readonly, nonatomic) unsigned short type;

+ (id)searchLookupIdentifierForUtilityCollectionType:(unsigned short)a0;

- (id)description;
- (id)localizedTitle;
- (id)initWithType:(unsigned short)a0 fetchOptions:(id)a1;

@end
