@class NSData;

@interface FLOWSchemaFLOWTextMessageLength : SISchemaInstrumentationMessage {
    struct { unsigned char messageCharLength : 1; unsigned char messageWordLength : 1; } _has;
}

@property (nonatomic) unsigned int messageCharLength;
@property (nonatomic) char hasMessageCharLength;
@property (nonatomic) unsigned int messageWordLength;
@property (nonatomic) char hasMessageWordLength;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMessageCharLength;
- (void)deleteMessageWordLength;
- (id)suppressMessageUnderConditions;

@end
