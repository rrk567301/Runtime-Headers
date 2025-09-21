@class NSString, NSMutableArray, BMPBSocialHighlightContact;

@interface BMPBRankableSocialHighlight : PBCodable <NSCopying> {
    struct { unsigned char contentCreationSecondsSinceReferenceDate : 1; unsigned char rankingSecondsSinceReferenceDate : 1; unsigned char score : 1; unsigned char syndicationSecondsSinceReferenceDate : 1; unsigned char highlightType : 1; unsigned char rank : 1; unsigned char isConversationAutoDonating : 1; unsigned char isPrimary : 1; } _has;
}

@property (readonly, nonatomic) char hasHighlightIdentifier;
@property (retain, nonatomic) NSString *highlightIdentifier;
@property (nonatomic) char hasHighlightType;
@property (nonatomic) int highlightType;
@property (nonatomic) char hasSyndicationSecondsSinceReferenceDate;
@property (nonatomic) double syndicationSecondsSinceReferenceDate;
@property (readonly, nonatomic) char hasSourceBundleId;
@property (retain, nonatomic) NSString *sourceBundleId;
@property (retain, nonatomic) NSMutableArray *applicationIdentifiers;
@property (readonly, nonatomic) char hasResourceUrl;
@property (retain, nonatomic) NSString *resourceUrl;
@property (readonly, nonatomic) char hasSender;
@property (retain, nonatomic) BMPBSocialHighlightContact *sender;
@property (readonly, nonatomic) char hasDomainIdentifier;
@property (retain, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) char hasBatchIdentifier;
@property (retain, nonatomic) NSString *batchIdentifier;
@property (retain, nonatomic) NSMutableArray *calculatedFeatures;
@property (readonly, nonatomic) char hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) char hasContentCreationSecondsSinceReferenceDate;
@property (nonatomic) double contentCreationSecondsSinceReferenceDate;
@property (readonly, nonatomic) char hasGroupPhotoPathDigest;
@property (retain, nonatomic) NSString *groupPhotoPathDigest;
@property (readonly, nonatomic) char hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) char hasIsPrimary;
@property (nonatomic) char isPrimary;
@property (readonly, nonatomic) char hasAttributionIdentifier;
@property (retain, nonatomic) NSString *attributionIdentifier;
@property (nonatomic) char hasRank;
@property (nonatomic) unsigned int rank;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;
@property (nonatomic) char hasIsConversationAutoDonating;
@property (nonatomic) char isConversationAutoDonating;
@property (readonly, nonatomic) char hasOriginatingDeviceId;
@property (retain, nonatomic) NSString *originatingDeviceId;
@property (nonatomic) char hasRankingSecondsSinceReferenceDate;
@property (nonatomic) double rankingSecondsSinceReferenceDate;
@property (readonly, nonatomic) char hasResolvedUrl;
@property (retain, nonatomic) NSString *resolvedUrl;
@property (readonly, nonatomic) char hasClientVariant;
@property (retain, nonatomic) NSString *clientVariant;

+ (Class)applicationIdentifiersType;
+ (Class)calculatedFeaturesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsHighlightType:(id)a0;
- (void)addApplicationIdentifiers:(id)a0;
- (void)addCalculatedFeatures:(id)a0;
- (id)applicationIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)applicationIdentifiersCount;
- (id)calculatedFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)calculatedFeaturesCount;
- (void)clearApplicationIdentifiers;
- (void)clearCalculatedFeatures;
- (id)highlightTypeAsString:(int)a0;

@end
