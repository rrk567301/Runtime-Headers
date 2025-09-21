@class NSArray, NSData;

@interface PEGASUSSchemaPEGASUSMultistepSubSearchExecution : SISchemaInstrumentationMessage {
    struct { unsigned char loopbackDepth : 1; unsigned char parentDomain : 1; unsigned char hasNextSteps : 1; unsigned char searchType : 1; unsigned char hasAugmentedQuery : 1; } _has;
}

@property (nonatomic) int loopbackDepth;
@property (nonatomic) char hasLoopbackDepth;
@property (nonatomic) int parentDomain;
@property (nonatomic) char hasParentDomain;
@property (nonatomic) char hasNextSteps;
@property (nonatomic) char hasHasNextSteps;
@property (nonatomic) int searchType;
@property (nonatomic) char hasSearchType;
@property (copy, nonatomic) NSArray *subSearchDomains;
@property (nonatomic) char hasAugmentedQuery;
@property (nonatomic) char hasHasAugmentedQuery;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addSubSearchDomains:(int)a0;
- (void)clearSubSearchDomains;
- (void)deleteHasAugmentedQuery;
- (void)deleteHasNextSteps;
- (void)deleteLoopbackDepth;
- (void)deleteParentDomain;
- (void)deleteSearchType;
- (void)deleteSubSearchDomains;
- (int)subSearchDomainsAtIndex:(unsigned long long)a0;
- (unsigned long long)subSearchDomainsCount;
- (id)suppressMessageUnderConditions;

@end
