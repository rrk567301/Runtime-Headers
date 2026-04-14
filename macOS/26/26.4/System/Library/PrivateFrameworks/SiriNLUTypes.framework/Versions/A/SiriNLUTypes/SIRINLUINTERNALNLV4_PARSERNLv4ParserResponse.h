@class NSMutableArray;

@interface SIRINLUINTERNALNLV4_PARSERNLv4ParserResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *hypotheses;

+ (Class)hypothesesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)clearHypotheses;
- (unsigned long long)hypothesesCount;
- (void)addHypotheses:(id)a0;
- (id)hypothesesAtIndex:(unsigned long long)a0;

@end
