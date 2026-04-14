@class NSArray, NSString, NSDate, NSNumber;

@interface PHSearchResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long retrievalType;
@property (readonly, nonatomic) NSNumber *l1Score;
@property (readonly, nonatomic) NSNumber *l2Score;
@property (readonly, nonatomic) NSNumber *collectionScore;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *addedDate;
@property (readonly, nonatomic) BOOL isSyndicationAsset;
@property (readonly, nonatomic) NSArray *embeddingDistances;
@property (readonly, nonatomic) BOOL hasOCRTextMatch;
@property (readonly, nonatomic) BOOL isExclusivelyExactOCRTextMatch;
@property (readonly, nonatomic) BOOL isSensitiveLocation;
@property (readonly, nonatomic) unsigned long long matchType;
@property (readonly, nonatomic) NSString *matchedThumbnailIdentifier;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (BOOL)isCollectionResultType:(unsigned long long)a0;

- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEligibleForSuggestions;
- (id)initWithSearchResultType:(unsigned long long)a0 uuid:(id)a1 retrievalType:(unsigned long long)a2 hasOCRTextMatch:(BOOL)a3 isSensitiveLocation:(BOOL)a4 embeddingDistances:(id)a5 l1Score:(id)a6 l2Score:(id)a7 collectionScore:(id)a8 creationDate:(id)a9 addedDate:(id)a10 matchedThumbnailIdentifier:(id)a11 bundleIdentifier:(id)a12;
- (id)redactedJSONDictionary;

@end
