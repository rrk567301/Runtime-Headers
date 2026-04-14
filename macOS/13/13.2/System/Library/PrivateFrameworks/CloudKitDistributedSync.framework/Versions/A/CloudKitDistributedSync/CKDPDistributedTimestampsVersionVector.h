@interface CKDPDistributedTimestampsVersionVector : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _clockValueLengths;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _clockValues;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _stateValueLengths;
    struct { int *list; unsigned long long count; unsigned long long size; } _stateValues;
}

@property (readonly, nonatomic) unsigned long long clockValuesCount;
@property (readonly, nonatomic) unsigned long long *clockValues;
@property (readonly, nonatomic) unsigned long long clockValueLengthsCount;
@property (readonly, nonatomic) unsigned long long *clockValueLengths;
@property (readonly, nonatomic) unsigned long long stateValuesCount;
@property (readonly, nonatomic) int *stateValues;
@property (readonly, nonatomic) unsigned long long stateValueLengthsCount;
@property (readonly, nonatomic) unsigned int *stateValueLengths;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearClockValues;
- (void)addClockValues:(unsigned long long)a0;
- (unsigned long long)clockValuesAtIndex:(unsigned long long)a0;
- (void)setClockValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)clearClockValueLengths;
- (void)addClockValueLengths:(unsigned long long)a0;
- (unsigned long long)clockValueLengthsAtIndex:(unsigned long long)a0;
- (void)setClockValueLengths:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)clearStateValues;
- (void)addStateValues:(int)a0;
- (int)stateValuesAtIndex:(unsigned long long)a0;
- (void)setStateValues:(int *)a0 count:(unsigned long long)a1;
- (id)stateValuesAsString:(int)a0;
- (int)StringAsStateValues:(id)a0;
- (void)clearStateValueLengths;
- (void)addStateValueLengths:(unsigned int)a0;
- (unsigned int)stateValueLengthsAtIndex:(unsigned long long)a0;
- (void)setStateValueLengths:(unsigned int *)a0 count:(unsigned long long)a1;

@end
