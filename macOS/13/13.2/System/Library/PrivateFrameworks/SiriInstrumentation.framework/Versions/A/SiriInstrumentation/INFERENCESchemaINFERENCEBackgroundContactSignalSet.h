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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteIsMatchWithRelationName;
- (void)deletePeopleSuggesterScoreSumForContact;
- (void)clearHandlesWithBgPrivacySignals;
- (void)deleteHandlesWithBgPrivacySignals;
- (void)addHandlesWithBgPrivacySignals:(id)a0;
- (unsigned long long)handlesWithBgPrivacySignalsCount;
- (id)handlesWithBgPrivacySignalsAtIndex:(unsigned long long)a0;

@end
