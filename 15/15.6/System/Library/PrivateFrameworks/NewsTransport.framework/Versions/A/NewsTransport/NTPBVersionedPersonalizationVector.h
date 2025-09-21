@class NSData, NSString;

@interface NTPBVersionedPersonalizationVector : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasPersonalizationVector;
@property (retain, nonatomic) NSData *personalizationVector;
@property (readonly, nonatomic) char hasVersion;
@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) char hasBundleSubscribedVector;
@property (retain, nonatomic) NSData *bundleSubscribedVector;
@property (readonly, nonatomic) char hasBundleSubscribedVectorVersion;
@property (retain, nonatomic) NSString *bundleSubscribedVectorVersion;
@property (readonly, nonatomic) char hasSportsUuidVector;
@property (retain, nonatomic) NSData *sportsUuidVector;
@property (readonly, nonatomic) char hasSportsFavoritesVector;
@property (retain, nonatomic) NSData *sportsFavoritesVector;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
