@class NSData;

@interface IFTSchemaIFTResponseParameter : SISchemaInstrumentationMessage {
    struct { unsigned char profanityFilter : 1; unsigned char isRequired : 1; } _has;
}

@property (nonatomic) char profanityFilter;
@property (nonatomic) char hasProfanityFilter;
@property (nonatomic) char isRequired;
@property (nonatomic) char hasIsRequired;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsRequired;
- (void)deleteProfanityFilter;
- (id)suppressMessageUnderConditions;

@end
