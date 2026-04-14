@class NSData;

@interface PLUSSchemaPLUSMediaSuggestionSource : SISchemaInstrumentationMessage {
    struct { unsigned char sourceType : 1; } _has;
}

@property (nonatomic) int sourceType;
@property (nonatomic) BOOL hasSourceType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteSourceType;

@end
