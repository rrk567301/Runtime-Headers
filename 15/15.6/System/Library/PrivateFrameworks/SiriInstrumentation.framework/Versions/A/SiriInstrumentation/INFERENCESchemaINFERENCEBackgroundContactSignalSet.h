@class NSArray, NSData;

@interface INFERENCESchemaINFERENCEBackgroundContactSignalSet : SISchemaInstrumentationMessage {
    struct { unsigned char isMatchWithRelationName : 1; unsigned char peopleSuggesterScoreSumForContact : 1; } _has;
}

@property (nonatomic) char isMatchWithRelationName;
@property (nonatomic) char hasIsMatchWithRelationName;
@property (nonatomic) float peopleSuggesterScoreSumForContact;
@property (nonatomic) char hasPeopleSuggesterScoreSumForContact;
@property (copy, nonatomic) NSArray *handlesWithBgPrivacySignals;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addHandlesWithBgPrivacySignals:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearHandlesWithBgPrivacySignals;
- (void)deleteHandlesWithBgPrivacySignals;
- (void)deleteIsMatchWithRelationName;
- (void)deletePeopleSuggesterScoreSumForContact;
- (id)handlesWithBgPrivacySignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)handlesWithBgPrivacySignalsCount;
- (id)suppressMessageUnderConditions;

@end
