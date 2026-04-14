@class NSData;

@interface PLUSSchemaPLUSMediaSuggestionOutcome : SISchemaInstrumentationMessage {
    struct { unsigned char mediaSuggestionFeedback : 1; } _has;
}

@property (nonatomic) int mediaSuggestionFeedback;
@property (nonatomic) BOOL hasMediaSuggestionFeedback;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteMediaSuggestionFeedback;

@end
