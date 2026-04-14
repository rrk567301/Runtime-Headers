@class NSData;

@interface PLUSSchemaPLUSMediaSuggestionSource : SISchemaInstrumentationMessage {
    struct { unsigned char sourceType : 1; } _has;
}

@property (nonatomic) int sourceType;
@property (nonatomic) BOOL hasSourceType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteSourceType;

@end
