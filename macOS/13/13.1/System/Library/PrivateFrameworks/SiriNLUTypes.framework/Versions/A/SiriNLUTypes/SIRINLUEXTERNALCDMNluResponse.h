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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearParses;
- (void)addParses:(id)a0;
- (unsigned long long)parsesCount;
- (id)parsesAtIndex:(unsigned long long)a0;
- (void)clearRepetitionResults;
- (void)addRepetitionResults:(id)a0;
- (unsigned long long)repetitionResultsCount;
- (id)repetitionResultsAtIndex:(unsigned long long)a0;

@end
