@class NSString, NSArray, NSData;

@interface CAARSchemaCAARTieBreaker : SISchemaInstrumentationMessage {
    struct { unsigned char isTieBreakerSupported : 1; unsigned char wasTieBreakerForcedSkipped : 1; } _has;
}

@property (copy, nonatomic) NSString *tieBreakerName;
@property (nonatomic) char hasTieBreakerName;
@property (copy, nonatomic) NSArray *actionCandidateBoosts;
@property (nonatomic) char isTieBreakerSupported;
@property (nonatomic) char hasIsTieBreakerSupported;
@property (nonatomic) char wasTieBreakerForcedSkipped;
@property (nonatomic) char hasWasTieBreakerForcedSkipped;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)actionCandidateBoostsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionCandidateBoostsCount;
- (void)addActionCandidateBoosts:(id)a0;
- (void)clearActionCandidateBoosts;
- (void)deleteActionCandidateBoosts;
- (void)deleteIsTieBreakerSupported;
- (void)deleteTieBreakerName;
- (void)deleteWasTieBreakerForcedSkipped;
- (id)suppressMessageUnderConditions;

@end
