@class BMPBPersonalFact, NSMutableArray;

@interface BMPBPersonalInference : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char modelVersion : 1; } _has;
}

@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;
@property (readonly, nonatomic) BOOL hasFact;
@property (retain, nonatomic) BMPBPersonalFact *fact;
@property (retain, nonatomic) NSMutableArray *qualifiers;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) unsigned int modelVersion;

+ (Class)qualifiersType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearQualifiers;
- (void)addQualifiers:(id)a0;
- (unsigned long long)qualifiersCount;
- (id)qualifiersAtIndex:(unsigned long long)a0;

@end
