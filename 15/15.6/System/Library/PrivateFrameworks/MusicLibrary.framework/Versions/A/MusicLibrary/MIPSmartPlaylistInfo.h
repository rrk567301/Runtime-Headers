@class NSData;

@interface MIPSmartPlaylistInfo : PBCodable <NSCopying> {
    struct { unsigned char evaluationOrder : 1; unsigned char limitKind : 1; unsigned char limitOrder : 1; unsigned char limitValue : 1; unsigned char dynamic : 1; unsigned char enabledItemsOnly : 1; unsigned char filtered : 1; unsigned char genius : 1; unsigned char limited : 1; unsigned char reverseLimitOrder : 1; } _has;
}

@property (nonatomic) char hasDynamic;
@property (nonatomic) char dynamic;
@property (nonatomic) char hasFiltered;
@property (nonatomic) char filtered;
@property (nonatomic) char hasLimited;
@property (nonatomic) char limited;
@property (nonatomic) char hasLimitKind;
@property (nonatomic) int limitKind;
@property (nonatomic) char hasEvaluationOrder;
@property (nonatomic) unsigned int evaluationOrder;
@property (nonatomic) char hasLimitOrder;
@property (nonatomic) unsigned int limitOrder;
@property (nonatomic) char hasLimitValue;
@property (nonatomic) unsigned int limitValue;
@property (nonatomic) char hasEnabledItemsOnly;
@property (nonatomic) char enabledItemsOnly;
@property (nonatomic) char hasReverseLimitOrder;
@property (nonatomic) char reverseLimitOrder;
@property (readonly, nonatomic) char hasSmartCriteria;
@property (retain, nonatomic) NSData *smartCriteria;
@property (nonatomic) char hasGenius;
@property (nonatomic) char genius;

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
