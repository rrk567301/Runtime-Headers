@interface DRSProtoDiagnosticRequestOutcomeBucket : PBCodable <NSCopying> {
    struct { unsigned char count : 1; unsigned char outcome : 1; unsigned char requestState : 1; } _has;
}

@property (nonatomic) char hasOutcome;
@property (nonatomic) int outcome;
@property (nonatomic) char hasRequestState;
@property (nonatomic) int requestState;
@property (nonatomic) char hasCount;
@property (nonatomic) unsigned long long count;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsOutcome:(id)a0;
- (id)outcomeAsString:(int)a0;
- (int)StringAsRequestState:(id)a0;
- (id)requestStateAsString:(int)a0;

@end
