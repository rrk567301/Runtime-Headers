@class NSData;

@interface MHSchemaMHEndpointDelayContext : SISchemaInstrumentationMessage {
    struct { unsigned char speakingStartInNs : 1; unsigned char speakingEndInNs : 1; unsigned char endpointDelayInNs : 1; unsigned char endpointModelDelayInNs : 1; unsigned char endpointDelayInNsV2 : 1; } _has;
}

@property (nonatomic) unsigned long long speakingStartInNs;
@property (nonatomic) char hasSpeakingStartInNs;
@property (nonatomic) unsigned long long speakingEndInNs;
@property (nonatomic) char hasSpeakingEndInNs;
@property (nonatomic) unsigned long long endpointDelayInNs;
@property (nonatomic) char hasEndpointDelayInNs;
@property (nonatomic) unsigned long long endpointModelDelayInNs;
@property (nonatomic) char hasEndpointModelDelayInNs;
@property (nonatomic) unsigned long long endpointDelayInNsV2;
@property (nonatomic) char hasEndpointDelayInNsV2;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEndpointDelayInNs;
- (void)deleteEndpointDelayInNsV2;
- (void)deleteEndpointModelDelayInNs;
- (void)deleteSpeakingEndInNs;
- (void)deleteSpeakingStartInNs;
- (id)suppressMessageUnderConditions;

@end
