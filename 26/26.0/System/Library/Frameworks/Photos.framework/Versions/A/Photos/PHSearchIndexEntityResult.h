@class NSString;

@interface PHSearchIndexEntityResult : NSObject

@property (readonly, nonatomic) unsigned long long groupId;
@property (readonly, nonatomic) unsigned long long owningGroupId;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *normalizedText;
@property (readonly, nonatomic) NSString *lookupIdentifier;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) unsigned long long matchType;

+ (void)enumerateIndexEntitiesMatchingTexts:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
+ (id)fetchAssetUUIDsForDateComponents:(id)a0 toLibrary:(id)a1 error:(out id *)a2;
+ (id)fetchAssetUUIDsForIndexEntities:(id)a0 photoLibrary:(id)a1 error:(out id *)a2;
+ (id)fetchAssetUUIDsFromStartDateComponents:(id)a0 endDateComponents:(id)a1 photoLibrary:(id)a2 error:(out id *)a3;
+ (id)indexEntitiesMatchingText:(id)a0 options:(id)a1 error:(id *)a2;

- (id)jsonDictionary;
- (long long)compare:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initFromPSIGroup:(id)a0 matchType:(unsigned long long)a1;
- (BOOL)isEqualIgnoringMatchType:(id)a0;

@end
