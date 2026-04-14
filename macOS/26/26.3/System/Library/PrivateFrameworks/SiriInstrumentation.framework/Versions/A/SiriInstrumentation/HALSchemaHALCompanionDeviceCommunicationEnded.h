@class NSData;

@interface HALSchemaHALCompanionDeviceCommunicationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char connectionType : 1; unsigned char didConnectionTimeOut : 1; } _has;
}

@property (nonatomic) int connectionType;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) BOOL didConnectionTimeOut;
@property (nonatomic) BOOL hasDidConnectionTimeOut;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteConnectionType;
- (void)deleteDidConnectionTimeOut;

@end
