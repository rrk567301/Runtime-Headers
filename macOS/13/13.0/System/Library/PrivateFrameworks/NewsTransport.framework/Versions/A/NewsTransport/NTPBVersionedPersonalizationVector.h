@class NSData, NSString;

@interface NTPBVersionedPersonalizationVector : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPersonalizationVector;
@property (retain, nonatomic) NSData *personalizationVector;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) BOOL hasBundleSubscribedVector;
@property (retain, nonatomic) NSData *bundleSubscribedVector;
@property (readonly, nonatomic) BOOL hasBundleSubscribedVectorVersion;
@property (retain, nonatomic) NSString *bundleSubscribedVectorVersion;
@property (readonly, nonatomic) BOOL hasSportsUuidVector;
@property (retain, nonatomic) NSData *sportsUuidVector;
@property (readonly, nonatomic) BOOL hasSportsFavoritesVector;
@property (retain, nonatomic) NSData *sportsFavoritesVector;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
