@class NSData;

@interface SISchemaUEISiriCarCommandCancelled : SISchemaInstrumentationMessage {
    struct { unsigned char isSiriDigitalCarKeyRequest : 1; } _has;
}

@property (nonatomic) BOOL isSiriDigitalCarKeyRequest;
@property (nonatomic) BOOL hasIsSiriDigitalCarKeyRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteIsSiriDigitalCarKeyRequest;

@end
