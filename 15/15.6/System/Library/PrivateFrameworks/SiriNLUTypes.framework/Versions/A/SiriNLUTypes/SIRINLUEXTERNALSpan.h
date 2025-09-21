@class NSString, SIRINLUEXTERNALUsoGraph;

@interface SIRINLUEXTERNALSpan : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _matcherNames;
    struct { unsigned char score : 1; unsigned char endTokenIndex : 1; unsigned char startTokenIndex : 1; } _has;
}

@property (readonly, nonatomic) char hasLabel;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) char hasInput;
@property (retain, nonatomic) NSString *input;
@property (nonatomic) char hasStartTokenIndex;
@property (nonatomic) unsigned int startTokenIndex;
@property (nonatomic) char hasEndTokenIndex;
@property (nonatomic) unsigned int endTokenIndex;
@property (readonly, nonatomic) char hasUsoGraph;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *usoGraph;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;
@property (readonly, nonatomic) unsigned long long matcherNamesCount;
@property (readonly, nonatomic) int *matcherNames;

- (void)dealloc;
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
- (void)addMatcherNames:(int)a0;
- (void)clearMatcherNames;
- (int)matcherNamesAtIndex:(unsigned long long)a0;
- (int)StringAsMatcherNames:(id)a0;
- (id)matcherNamesAsString:(int)a0;
- (void)setMatcherNames:(int *)a0 count:(unsigned long long)a1;

@end
