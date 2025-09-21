@class MPPMediaPredicate;

@interface MPPConditionalPredicate : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasConditionalPredicate;
@property (retain, nonatomic) MPPMediaPredicate *conditionalPredicate;
@property (readonly, nonatomic) char hasThenPredicate;
@property (retain, nonatomic) MPPMediaPredicate *thenPredicate;
@property (readonly, nonatomic) char hasElsePredicate;
@property (retain, nonatomic) MPPMediaPredicate *elsePredicate;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
