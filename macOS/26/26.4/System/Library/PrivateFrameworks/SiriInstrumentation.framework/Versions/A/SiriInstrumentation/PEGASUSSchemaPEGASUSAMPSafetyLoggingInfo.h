@class NSArray, NSString, NSData;

@interface PEGASUSSchemaPEGASUSAMPSafetyLoggingInfo : SISchemaInstrumentationMessage {
    struct { unsigned char isSearchNoResults : 1; unsigned char hasSafetyMessage : 1; unsigned char pegasusSafetyStatus : 1; } _has;
}

@property (nonatomic) BOOL isSearchNoResults;
@property (nonatomic) BOOL hasIsSearchNoResults;
@property (nonatomic) BOOL hasSafetyMessage;
@property (nonatomic) BOOL hasHasSafetyMessage;
@property (nonatomic) int pegasusSafetyStatus;
@property (nonatomic) BOOL hasPegasusSafetyStatus;
@property (copy, nonatomic) NSArray *pegasusSafetyScores;
@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
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
- (void)addPegasusSafetyScores:(id)a0;
- (void)clearPegasusSafetyScores;
- (void)deleteHasSafetyMessage;
- (void)deleteIsSearchNoResults;
- (void)deleteModelVersion;
- (void)deletePegasusSafetyScores;
- (void)deletePegasusSafetyStatus;
- (id)pegasusSafetyScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)pegasusSafetyScoresCount;

@end
