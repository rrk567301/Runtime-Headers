@class NSData;

@interface SISchemaUEISiriCarCommandFailed : SISchemaInstrumentationMessage {
    struct { unsigned char isSiriDigitalCarKeyRequest : 1; } _has;
}

@property (nonatomic) char isSiriDigitalCarKeyRequest;
@property (nonatomic) char hasIsSiriDigitalCarKeyRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsSiriDigitalCarKeyRequest;
- (id)suppressMessageUnderConditions;

@end
