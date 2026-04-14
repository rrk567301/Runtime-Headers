@class NSString;

@interface NTPBWidgetPersonalizationFeatureCTRPair : PBCodable <NSCopying> {
    struct { unsigned char ctr : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPersonalizationFeatureId;
@property (retain, nonatomic) NSString *personalizationFeatureId;
@property (nonatomic) BOOL hasCtr;
@property (nonatomic) float ctr;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
