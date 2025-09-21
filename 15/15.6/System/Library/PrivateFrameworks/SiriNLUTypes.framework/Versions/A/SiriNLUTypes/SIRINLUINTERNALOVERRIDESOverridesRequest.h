@class NSString, SIRINLUINTERNALTokenChain, NSMutableArray, SIRINLUEXTERNALTurnContext;

@interface SIRINLUINTERNALOVERRIDESOverridesRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (readonly, nonatomic) char hasTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (retain, nonatomic) NSMutableArray *systemDialogActs;
@property (readonly, nonatomic) char hasTurnContext;
@property (retain, nonatomic) SIRINLUEXTERNALTurnContext *turnContext;
@property (retain, nonatomic) NSMutableArray *inputs;

+ (Class)inputsType;
+ (Class)matchingSpansType;
+ (Class)systemDialogActsType;

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
- (void)addInputs:(id)a0;
- (unsigned long long)inputsCount;
- (void)addMatchingSpans:(id)a0;
- (void)addSystemDialogActs:(id)a0;
- (void)clearMatchingSpans;
- (void)clearSystemDialogActs;
- (id)matchingSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)matchingSpansCount;
- (id)systemDialogActsAtIndex:(unsigned long long)a0;
- (unsigned long long)systemDialogActsCount;
- (void)clearInputs;
- (id)inputsAtIndex:(unsigned long long)a0;

@end
