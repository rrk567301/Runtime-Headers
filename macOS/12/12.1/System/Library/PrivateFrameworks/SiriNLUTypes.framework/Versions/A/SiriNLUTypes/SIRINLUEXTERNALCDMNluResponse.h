@class SIRINLUEXTERNALRequestID, NSMutableArray, SIRINLUEXTERNALResponseStatus;

@interface SIRINLUEXTERNALCDMNluResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *requestId;
@property (retain, nonatomic) NSMutableArray *parses;
@property (readonly, nonatomic) BOOL hasResponseStatus;
@property (retain, nonatomic) SIRINLUEXTERNALResponseStatus *responseStatus;
@property (retain, nonatomic) NSMutableArray *repetitionResults;

+ (Class)parsesType;
+ (Class)repetitionResultsType;

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
- (void)addParses:(id)a0;
- (void)clearParses;
- (unsigned long long)parsesCount;
- (id)parsesAtIndex:(unsigned long long)a0;
- (void)addRepetitionResults:(id)a0;
- (unsigned long long)repetitionResultsCount;
- (void)clearRepetitionResults;
- (id)repetitionResultsAtIndex:(unsigned long long)a0;

@end
