@class NSString, NSArray, NSData;

@interface _INPBPrivateMediaItemValueData : PBCodable <_INPBPrivateMediaItemValueData, NSSecureCoding, NSCopying> {
    struct { unsigned char ampConfidenceLevel : 1; unsigned char ampConfidenceScore : 1; unsigned char isAvailable : 1; unsigned char isHardBan : 1; unsigned char requiresSubscription : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int ampConfidenceLevel;
@property (nonatomic) char hasAmpConfidenceLevel;
@property (nonatomic) float ampConfidenceScore;
@property (nonatomic) char hasAmpConfidenceScore;
@property (copy, nonatomic) NSString *assetInfo;
@property (readonly, nonatomic) char hasAssetInfo;
@property (copy, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) char hasBundleId;
@property (copy, nonatomic) NSArray *internalSignals;
@property (readonly, nonatomic) unsigned long long internalSignalsCount;
@property (nonatomic) char isAvailable;
@property (nonatomic) char hasIsAvailable;
@property (nonatomic) char isHardBan;
@property (nonatomic) char hasIsHardBan;
@property (copy, nonatomic) NSArray *mediaSubItems;
@property (readonly, nonatomic) unsigned long long mediaSubItemsCount;
@property (copy, nonatomic) NSData *pegasusMetaData;
@property (readonly, nonatomic) char hasPegasusMetaData;
@property (copy, nonatomic) NSString *provider;
@property (readonly, nonatomic) char hasProvider;
@property (copy, nonatomic) NSString *providerAppName;
@property (readonly, nonatomic) char hasProviderAppName;
@property (copy, nonatomic) NSString *punchoutURI;
@property (readonly, nonatomic) char hasPunchoutURI;
@property (copy, nonatomic) NSString *recommendationId;
@property (readonly, nonatomic) char hasRecommendationId;
@property (nonatomic) char requiresSubscription;
@property (nonatomic) char hasRequiresSubscription;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableMusicAccount;
@property (readonly, nonatomic) char hasSharedUserIdFromPlayableMusicAccount;
@property (copy, nonatomic) NSString *universalResourceLink;
@property (readonly, nonatomic) char hasUniversalResourceLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)mediaSubItemsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsAmpConfidenceLevel:(id)a0;
- (void)addInternalSignal:(id)a0;
- (void)addMediaSubItems:(id)a0;
- (id)ampConfidenceLevelAsString:(int)a0;
- (void)clearInternalSignals;
- (void)clearMediaSubItems;
- (id)internalSignalAtIndex:(unsigned long long)a0;
- (id)mediaSubItemsAtIndex:(unsigned long long)a0;

@end
