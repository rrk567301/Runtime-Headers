@class SIRINLUEXTERNALNLUSupplementaryOutput, SIRINLUEXTERNALResponseStatus, SIRINLUEXTERNALRequestID, NSMutableArray, SIRINLUEXTERNALLanguageVariantResult;

@interface SIRINLUEXTERNALCDMNluResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *requestId;
@property (retain, nonatomic) NSMutableArray *parses;
@property (readonly, nonatomic) char hasResponseStatus;
@property (retain, nonatomic) SIRINLUEXTERNALResponseStatus *responseStatus;
@property (retain, nonatomic) NSMutableArray *repetitionResults;
@property (readonly, nonatomic) char hasLanguageVariantResult;
@property (retain, nonatomic) SIRINLUEXTERNALLanguageVariantResult *languageVariantResult;
@property (readonly, nonatomic) char hasSupplementaryOutput;
@property (retain, nonatomic) SIRINLUEXTERNALNLUSupplementaryOutput *supplementaryOutput;

+ (Class)parsesType;
+ (Class)repetitionResultsType;

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
- (void)addParses:(id)a0;
- (void)clearParses;
- (id)parsesAtIndex:(unsigned long long)a0;
- (unsigned long long)parsesCount;
- (void)addRepetitionResults:(id)a0;
- (void)clearRepetitionResults;
- (id)repetitionResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)repetitionResultsCount;

@end
