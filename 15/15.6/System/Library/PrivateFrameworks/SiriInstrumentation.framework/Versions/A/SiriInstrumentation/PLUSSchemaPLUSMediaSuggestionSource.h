@class NSData;

@interface PLUSSchemaPLUSMediaSuggestionSource : SISchemaInstrumentationMessage {
    struct { unsigned char sourceType : 1; } _has;
}

@property (nonatomic) int sourceType;
@property (nonatomic) char hasSourceType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSourceType;
- (id)suppressMessageUnderConditions;

@end
