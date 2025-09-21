@class NSMutableArray;

@interface SIRINLUINTERNALOvertonKGSpanData : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; } _has;
}

@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;
@property (retain, nonatomic) NSMutableArray *features;

+ (Class)featuresType;

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
- (void)addFeatures:(id)a0;
- (id)featuresAtIndex:(unsigned long long)a0;
- (void)clearFeatures;
- (unsigned long long)featuresCount;

@end
