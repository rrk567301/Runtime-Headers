@class NSMutableArray;

@interface AWDProactiveModelFittingMinibatchStats : PBCodable <NSCopying> {
    struct { unsigned char batchSize : 1; unsigned char support : 1; } _has;
}

@property (nonatomic) char hasSupport;
@property (nonatomic) float support;
@property (nonatomic) char hasBatchSize;
@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic) NSMutableArray *perLabelSupports;

+ (Class)perLabelSupportType;
+ (id)statsWithPerLabelCounts:(id)a0;
+ (id)statsWithSize:(unsigned long long)a0 support:(float)a1;

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
- (id)toDictionary;
- (id)combineWithStats:(id)a0;
- (void)addPerLabelSupport:(id)a0;
- (void)clearPerLabelSupports;
- (id)perLabelSupportAtIndex:(unsigned long long)a0;
- (unsigned long long)perLabelSupportsCount;
- (float)supportForLabel:(unsigned long long)a0;

@end
