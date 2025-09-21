@class TPPBDictionaryMatchingRuleFieldExists, NSMutableArray, TPPBDictionaryMatchingRuleFieldRegexMatch;

@interface TPPBDictionaryMatchingRule : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *ands;
@property (retain, nonatomic) NSMutableArray *ors;
@property (readonly, nonatomic) char hasNot;
@property (retain, nonatomic) TPPBDictionaryMatchingRule *not;
@property (readonly, nonatomic) char hasMatch;
@property (retain, nonatomic) TPPBDictionaryMatchingRuleFieldRegexMatch *match;
@property (readonly, nonatomic) char hasExists;
@property (retain, nonatomic) TPPBDictionaryMatchingRuleFieldExists *exists;

+ (Class)andType;
+ (Class)orType;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)addAnd:(id)a0;
- (void)addOr:(id)a0;
- (id)andAtIndex:(unsigned long long)a0;
- (unsigned long long)andsCount;
- (void)clearAnds;
- (void)clearOrs;
- (char)invertMatch:(id)a0 error:(id *)a1;
- (char)matches:(id)a0 error:(id *)a1;
- (id)orAtIndex:(unsigned long long)a0;
- (unsigned long long)orsCount;
- (char)performAndMatch:(id)a0 error:(id *)a1;
- (char)performOrMatch:(id)a0 error:(id *)a1;

@end
