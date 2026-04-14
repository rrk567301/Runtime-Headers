@class NSMutableArray;

@interface AWDProactiveModelFittingMinibatchStats : PBCodable <NSCopying> {
    struct { unsigned char batchSize : 1; unsigned char support : 1; } _has;
}

@property (nonatomic) BOOL hasSupport;
@property (nonatomic) float support;
@property (nonatomic) BOOL hasBatchSize;
@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic) NSMutableArray *perLabelSupports;

+ (Class)perLabelSupportType;
+ (id)statsWithSize:(unsigned long long)a0 support:(float)a1;
+ (id)statsWithPerLabelCounts:(id)a0;

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
- (id)toDictionary;
- (id)combineWithStats:(id)a0;
- (void)clearPerLabelSupports;
- (void)addPerLabelSupport:(id)a0;
- (unsigned long long)perLabelSupportsCount;
- (id)perLabelSupportAtIndex:(unsigned long long)a0;
- (float)supportForLabel:(unsigned long long)a0;

@end
