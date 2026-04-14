@class NSString, NSArray, NSData;

@interface CAARSchemaCAARTieBreaker : SISchemaInstrumentationMessage {
    struct { unsigned char isTieBreakerSupported : 1; unsigned char wasTieBreakerForcedSkipped : 1; } _has;
}

@property (copy, nonatomic) NSString *tieBreakerName;
@property (nonatomic) BOOL hasTieBreakerName;
@property (copy, nonatomic) NSArray *actionCandidateBoosts;
@property (nonatomic) BOOL isTieBreakerSupported;
@property (nonatomic) BOOL hasIsTieBreakerSupported;
@property (nonatomic) BOOL wasTieBreakerForcedSkipped;
@property (nonatomic) BOOL hasWasTieBreakerForcedSkipped;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)actionCandidateBoostsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionCandidateBoostsCount;
- (void)addActionCandidateBoosts:(id)a0;
- (void)clearActionCandidateBoosts;
- (void)deleteActionCandidateBoosts;
- (void)deleteIsTieBreakerSupported;
- (void)deleteTieBreakerName;
- (void)deleteWasTieBreakerForcedSkipped;

@end
