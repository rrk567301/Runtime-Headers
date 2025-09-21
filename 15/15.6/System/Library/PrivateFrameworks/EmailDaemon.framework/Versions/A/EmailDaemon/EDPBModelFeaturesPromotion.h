@class NSString;

@interface EDPBModelFeaturesPromotion : PBCodable <NSCopying> {
    struct { unsigned char headerKeyFilteredCount : 1; unsigned char toCount : 1; unsigned char unknownFeatureCount : 1; } _has;
}

@property (nonatomic) char hasUnknownFeatureCount;
@property (nonatomic) unsigned int unknownFeatureCount;
@property (nonatomic) char hasToCount;
@property (nonatomic) unsigned int toCount;
@property (readonly, nonatomic) char hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) char hasHeaderKeyFilteredCount;
@property (nonatomic) unsigned int headerKeyFilteredCount;

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

@end
