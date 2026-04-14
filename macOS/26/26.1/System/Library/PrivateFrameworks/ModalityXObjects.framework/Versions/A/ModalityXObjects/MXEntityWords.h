@class NSMutableArray;

@interface MXEntityWords : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *words;

+ (Class)wordsType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)wordsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addWords:(id)a0;
- (void)clearWords;
- (id)wordsAtIndex:(unsigned long long)a0;

@end
