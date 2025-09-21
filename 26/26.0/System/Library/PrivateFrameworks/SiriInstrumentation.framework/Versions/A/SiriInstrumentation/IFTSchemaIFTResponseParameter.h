@class NSData;

@interface IFTSchemaIFTResponseParameter : SISchemaInstrumentationMessage {
    struct { unsigned char profanityFilter : 1; unsigned char isRequired : 1; } _has;
}

@property (nonatomic) BOOL profanityFilter;
@property (nonatomic) BOOL hasProfanityFilter;
@property (nonatomic) BOOL isRequired;
@property (nonatomic) BOOL hasIsRequired;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteIsRequired;
- (void)deleteProfanityFilter;

@end
