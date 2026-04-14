@class NSMutableArray;

@interface SIRINLUEXTERNALNLU_ROUTERQueryDecorationOutput : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *requiredContexts;
@property (retain, nonatomic) NSMutableArray *originalRankedTools;
@property (retain, nonatomic) NSMutableArray *adjustedRankedTools;
@property (retain, nonatomic) NSMutableArray *originalRankedSpans;
@property (retain, nonatomic) NSMutableArray *adjustedRankedSpans;

+ (Class)adjustedRankedSpansType;
+ (Class)adjustedRankedToolsType;
+ (Class)originalRankedSpansType;
+ (Class)originalRankedToolsType;
+ (Class)requiredContextType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addRequiredContext:(id)a0;
- (id)requiredContextAtIndex:(unsigned long long)a0;
- (void)addAdjustedRankedSpans:(id)a0;
- (void)addAdjustedRankedTools:(id)a0;
- (void)addOriginalRankedSpans:(id)a0;
- (void)addOriginalRankedTools:(id)a0;
- (id)adjustedRankedSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)adjustedRankedSpansCount;
- (id)adjustedRankedToolsAtIndex:(unsigned long long)a0;
- (unsigned long long)adjustedRankedToolsCount;
- (void)clearAdjustedRankedSpans;
- (void)clearAdjustedRankedTools;
- (void)clearOriginalRankedSpans;
- (void)clearOriginalRankedTools;
- (void)clearRequiredContexts;
- (id)originalRankedSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)originalRankedSpansCount;
- (id)originalRankedToolsAtIndex:(unsigned long long)a0;
- (unsigned long long)originalRankedToolsCount;
- (unsigned long long)requiredContextsCount;

@end
