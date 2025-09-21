@class NSData;

@interface PLUSSchemaPLUSMediaSuggestionOutcome : SISchemaInstrumentationMessage {
    struct { unsigned char mediaSuggestionFeedback : 1; } _has;
}

@property (nonatomic) int mediaSuggestionFeedback;
@property (nonatomic) char hasMediaSuggestionFeedback;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMediaSuggestionFeedback;
- (id)suppressMessageUnderConditions;

@end
