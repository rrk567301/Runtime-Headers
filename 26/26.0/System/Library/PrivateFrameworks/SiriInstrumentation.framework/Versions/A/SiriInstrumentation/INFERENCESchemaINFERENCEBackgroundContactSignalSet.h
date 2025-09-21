@class NSArray, NSData;

@interface INFERENCESchemaINFERENCEBackgroundContactSignalSet : SISchemaInstrumentationMessage {
    struct { unsigned char isMatchWithRelationName : 1; unsigned char peopleSuggesterScoreSumForContact : 1; } _has;
}

@property (nonatomic) BOOL isMatchWithRelationName;
@property (nonatomic) BOOL hasIsMatchWithRelationName;
@property (nonatomic) float peopleSuggesterScoreSumForContact;
@property (nonatomic) BOOL hasPeopleSuggesterScoreSumForContact;
@property (copy, nonatomic) NSArray *handlesWithBgPrivacySignals;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addHandlesWithBgPrivacySignals:(id)a0;
- (void)clearHandlesWithBgPrivacySignals;
- (void)deleteHandlesWithBgPrivacySignals;
- (void)deleteIsMatchWithRelationName;
- (void)deletePeopleSuggesterScoreSumForContact;
- (id)handlesWithBgPrivacySignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)handlesWithBgPrivacySignalsCount;

@end
