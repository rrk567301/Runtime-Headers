@class SIRINLUEXTERNALRequestID, SIRINLUEXTERNALTurnInput, NSMutableArray;

@interface SIRINLUEXTERNALCDMNluRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *requestId;
@property (readonly, nonatomic) BOOL hasCurrentTurnInput;
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *currentTurnInput;
@property (retain, nonatomic) NSMutableArray *previousTurnInputs;

+ (Class)previousTurnInputsType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addPreviousTurnInputs:(id)a0;
- (void)clearPreviousTurnInputs;
- (id)previousTurnInputsAtIndex:(unsigned long long)a0;
- (unsigned long long)previousTurnInputsCount;

@end
