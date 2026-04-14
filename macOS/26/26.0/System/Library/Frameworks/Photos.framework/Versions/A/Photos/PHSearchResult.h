@class NSArray, NSString, NSDate, NSNumber;

@interface PHSearchResult : NSObject

@property (readonly, nonatomic) unsigned long long retrievalType;
@property (readonly, nonatomic) NSNumber *l1Score;
@property (readonly, nonatomic) NSNumber *l2Score;
@property (readonly, nonatomic) NSNumber *collectionScore;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *addedDate;
@property (readonly, nonatomic) NSArray *assetAlbumUUIDs;
@property (readonly, nonatomic) NSArray *assetMemoryUUIDs;
@property (readonly, nonatomic) NSArray *assetHighlightUUIDs;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSArray *embeddingDistances;
@property (readonly, nonatomic) BOOL hasOCRTextMatch;
@property (readonly, nonatomic) BOOL isExclusivelyExactOCRTextMatch;
@property (readonly, nonatomic) BOOL isSensitiveLocation;
@property (readonly, nonatomic) unsigned long long matchType;
@property (readonly, nonatomic) NSString *matchedThumbnailIdentifier;

+ (BOOL)isCollectionResultType:(unsigned long long)a0;

- (id)jsonDictionary;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEligibleForSuggestions;
- (id)initWithSearchResultType:(unsigned long long)a0 uuid:(id)a1 retrievalType:(unsigned long long)a2 hasOCRTextMatch:(BOOL)a3 isSensitiveLocation:(BOOL)a4 embeddingDistances:(id)a5 l1Score:(id)a6 l2Score:(id)a7 collectionScore:(id)a8 assetAlbumUUIDs:(id)a9 assetMemoryUUIDs:(id)a10 assetHighlightUUIDs:(id)a11 creationDate:(id)a12 addedDate:(id)a13;
- (id)initWithSearchResultType:(unsigned long long)a0 uuid:(id)a1 retrievalType:(unsigned long long)a2 hasOCRTextMatch:(BOOL)a3 isSensitiveLocation:(BOOL)a4 embeddingDistances:(id)a5 l1Score:(id)a6 l2Score:(id)a7 collectionScore:(id)a8 assetAlbumUUIDs:(id)a9 assetMemoryUUIDs:(id)a10 assetHighlightUUIDs:(id)a11 creationDate:(id)a12 addedDate:(id)a13 matchedThumbnailIdentifier:(id)a14;
- (id)redactedJSONDictionary;
- (void)releaseOwningCollectionUUIDs;

@end
