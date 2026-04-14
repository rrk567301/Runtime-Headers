@class MPPMediaPredicate;

@interface MPPConditionalPredicate : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasConditionalPredicate;
@property (retain, nonatomic) MPPMediaPredicate *conditionalPredicate;
@property (readonly, nonatomic) BOOL hasThenPredicate;
@property (retain, nonatomic) MPPMediaPredicate *thenPredicate;
@property (readonly, nonatomic) BOOL hasElsePredicate;
@property (retain, nonatomic) MPPMediaPredicate *elsePredicate;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
