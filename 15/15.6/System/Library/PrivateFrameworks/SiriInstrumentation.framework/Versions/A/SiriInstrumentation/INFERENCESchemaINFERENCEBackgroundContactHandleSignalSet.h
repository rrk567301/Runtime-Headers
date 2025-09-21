@class NSData;

@interface INFERENCESchemaINFERENCEBackgroundContactHandleSignalSet : SISchemaInstrumentationMessage {
    struct { unsigned char peopleSuggesterScore : 1; } _has;
}

@property (nonatomic) float peopleSuggesterScore;
@property (nonatomic) char hasPeopleSuggesterScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePeopleSuggesterScore;
- (id)suppressMessageUnderConditions;

@end
