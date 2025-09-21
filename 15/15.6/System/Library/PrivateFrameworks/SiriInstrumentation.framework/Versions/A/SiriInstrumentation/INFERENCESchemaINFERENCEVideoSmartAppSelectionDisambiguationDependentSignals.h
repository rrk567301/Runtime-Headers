@class NSData;

@interface INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationDependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char isDisambiguatedApp : 1; unsigned char modelAppConfidence : 1; unsigned char disambiguationAppOrdinal : 1; } _has;
}

@property (nonatomic) char isDisambiguatedApp;
@property (nonatomic) char hasIsDisambiguatedApp;
@property (nonatomic) int modelAppConfidence;
@property (nonatomic) char hasModelAppConfidence;
@property (nonatomic) int disambiguationAppOrdinal;
@property (nonatomic) char hasDisambiguationAppOrdinal;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDisambiguationAppOrdinal;
- (void)deleteIsDisambiguatedApp;
- (void)deleteModelAppConfidence;
- (id)suppressMessageUnderConditions;

@end
