@class SIRINLUEXTERNALNLUSupplementaryOutput, SIRINLUEXTERNALResponseStatus, SIRINLUEXTERNALRequestID, NSMutableArray, SIRINLUEXTERNALLanguageVariantResult;

@interface SIRINLUEXTERNALCDMNluResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *requestId;
@property (retain, nonatomic) NSMutableArray *parses;
@property (readonly, nonatomic) BOOL hasResponseStatus;
@property (retain, nonatomic) SIRINLUEXTERNALResponseStatus *responseStatus;
@property (retain, nonatomic) NSMutableArray *repetitionResults;
@property (readonly, nonatomic) BOOL hasLanguageVariantResult;
@property (retain, nonatomic) SIRINLUEXTERNALLanguageVariantResult *languageVariantResult;
@property (readonly, nonatomic) BOOL hasSupplementaryOutput;
@property (retain, nonatomic) SIRINLUEXTERNALNLUSupplementaryOutput *supplementaryOutput;

+ (Class)parsesType;
+ (Class)repetitionResultsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addParses:(id)a0;
- (void)clearParses;
- (id)parsesAtIndex:(unsigned long long)a0;
- (unsigned long long)parsesCount;
- (void)addRepetitionResults:(id)a0;
- (void)clearRepetitionResults;
- (id)repetitionResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)repetitionResultsCount;

@end
