@class NSData;

@interface HALSchemaHALCompanionDeviceCommunicationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char connectionType : 1; unsigned char didConnectionTimeOut : 1; } _has;
}

@property (nonatomic) int connectionType;
@property (nonatomic) char hasConnectionType;
@property (nonatomic) char didConnectionTimeOut;
@property (nonatomic) char hasDidConnectionTimeOut;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConnectionType;
- (void)deleteDidConnectionTimeOut;
- (id)suppressMessageUnderConditions;

@end
