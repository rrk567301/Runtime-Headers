@class NSString;

@interface IDSQRProtoExperimentOverride : PBCodable <NSCopying> {
    struct { unsigned char experimentId : 1; unsigned char value : 1; } _has;
}

@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) int experimentId;
@property (readonly, nonatomic) BOOL hasExperimentName;
@property (retain, nonatomic) NSString *experimentName;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) BOOL value;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsExperimentId:(id)a0;
- (id)experimentIdAsString:(int)a0;

@end
