@class NSMutableArray;

@interface GEOLPRPlateMatchCondition : PBCodable <NSCopying> {
    NSMutableArray *_patterns;
}

@property (retain, nonatomic) NSMutableArray *patterns;

+ (char)isValid:(id)a0;
+ (Class)patternsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addPatterns:(id)a0;
- (void)clearPatterns;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)patternsAtIndex:(unsigned long long)a0;
- (unsigned long long)patternsCount;
- (void)readAll:(char)a0;

@end
