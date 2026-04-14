@class NSData;

@interface HALSchemaHALCompanionDeviceCommunicationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char connectionType : 1; unsigned char didConnectionTimeOut : 1; } _has;
}

@property (nonatomic) int connectionType;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) BOOL didConnectionTimeOut;
@property (nonatomic) BOOL hasDidConnectionTimeOut;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConnectionType;
- (void)deleteDidConnectionTimeOut;

@end
