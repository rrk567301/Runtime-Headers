@class NSData;

@interface SISchemaAudioStopRecording : SISchemaInstrumentationMessage {
    struct { unsigned char endpointType : 1; } _has;
}

@property (nonatomic) int endpointType;
@property (nonatomic) BOOL hasEndpointType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteEndpointType;

@end
