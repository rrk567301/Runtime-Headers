@class NSString;

@interface MXLatnnMitigatorResult : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char threshold : 1; unsigned char processed : 1; } _has;
}

@property (nonatomic) char hasProcessed;
@property (nonatomic) char processed;
@property (readonly, nonatomic) char hasVersion;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) char hasThreshold;
@property (nonatomic) double threshold;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;

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
