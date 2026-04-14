@class NSData;

@interface INFERENCESchemaINFERENCEBackgroundContactHandleSignalSet : SISchemaInstrumentationMessage {
    struct { unsigned char peopleSuggesterScore : 1; } _has;
}

@property (nonatomic) float peopleSuggesterScore;
@property (nonatomic) BOOL hasPeopleSuggesterScore;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deletePeopleSuggesterScore;

@end
