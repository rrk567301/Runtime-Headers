@class SIRINLUEXTERNALRequestID, SIRINLUEXTERNALTurnInput, NSMutableArray;

@interface SIRINLUEXTERNALCDMNluRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *requestId;
@property (readonly, nonatomic) BOOL hasCurrentTurnInput;
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *currentTurnInput;
@property (retain, nonatomic) NSMutableArray *previousTurnInputs;

+ (Class)previousTurnInputsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addPreviousTurnInputs:(id)a0;
- (unsigned long long)previousTurnInputsCount;
- (void)clearPreviousTurnInputs;
- (id)previousTurnInputsAtIndex:(unsigned long long)a0;

@end
