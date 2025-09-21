@class NSString;

@interface IDSQRProtoExperimentOverride : PBCodable <NSCopying> {
    struct { unsigned char experimentId : 1; unsigned char value : 1; } _has;
}

@property (nonatomic) char hasExperimentId;
@property (nonatomic) int experimentId;
@property (readonly, nonatomic) char hasExperimentName;
@property (retain, nonatomic) NSString *experimentName;
@property (nonatomic) char hasValue;
@property (nonatomic) char value;

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
- (int)StringAsExperimentId:(id)a0;
- (id)experimentIdAsString:(int)a0;

@end
