@interface PCPPredictedContextDate : PBCodable <NSCopying> {
    struct { unsigned char confidenceInterval : 1; unsigned char date : 1; } _has;
}

@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasConfidenceInterval;
@property (nonatomic) double confidenceInterval;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
