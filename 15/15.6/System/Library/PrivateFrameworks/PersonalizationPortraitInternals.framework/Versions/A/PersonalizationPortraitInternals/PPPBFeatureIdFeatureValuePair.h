@class NSString;

@interface PPPBFeatureIdFeatureValuePair : PBCodable <NSCopying> {
    struct { unsigned char value : 1; } _has;
}

@property (readonly, nonatomic) char hasFeatureId;
@property (retain, nonatomic) NSString *featureId;
@property (nonatomic) char hasValue;
@property (nonatomic) float value;

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
