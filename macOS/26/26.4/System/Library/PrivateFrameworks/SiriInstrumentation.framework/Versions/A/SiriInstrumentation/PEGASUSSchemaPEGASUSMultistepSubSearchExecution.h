@class NSArray, NSData;

@interface PEGASUSSchemaPEGASUSMultistepSubSearchExecution : SISchemaInstrumentationMessage {
    struct { unsigned char loopbackDepth : 1; unsigned char parentDomain : 1; unsigned char hasNextSteps : 1; unsigned char searchType : 1; unsigned char hasAugmentedQuery : 1; } _has;
}

@property (nonatomic) int loopbackDepth;
@property (nonatomic) BOOL hasLoopbackDepth;
@property (nonatomic) int parentDomain;
@property (nonatomic) BOOL hasParentDomain;
@property (nonatomic) BOOL hasNextSteps;
@property (nonatomic) BOOL hasHasNextSteps;
@property (nonatomic) int searchType;
@property (nonatomic) BOOL hasSearchType;
@property (copy, nonatomic) NSArray *subSearchDomains;
@property (nonatomic) BOOL hasAugmentedQuery;
@property (nonatomic) BOOL hasHasAugmentedQuery;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
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

@end
