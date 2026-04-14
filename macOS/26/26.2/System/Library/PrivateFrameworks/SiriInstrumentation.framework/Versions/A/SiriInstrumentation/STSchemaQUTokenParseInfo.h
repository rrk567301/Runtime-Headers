@class NSData;

@interface STSchemaQUTokenParseInfo : SISchemaInstrumentationMessage {
    struct { unsigned char tokenLength : 1; } _has;
}

@property (nonatomic) unsigned int tokenLength;
@property (nonatomic) BOOL hasTokenLength;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteTokenLength;

@end
