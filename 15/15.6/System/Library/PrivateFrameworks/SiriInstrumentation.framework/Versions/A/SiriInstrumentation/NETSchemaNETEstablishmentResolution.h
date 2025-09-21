@class NETSchemaNETEndpoint, NSData;

@interface NETSchemaNETEstablishmentResolution : SISchemaInstrumentationMessage {
    struct { unsigned char duration : 1; unsigned char resolutionSource : 1; unsigned char endpointCount : 1; } _has;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned int resolutionSource;
@property (nonatomic) char hasResolutionSource;
@property (retain, nonatomic) NETSchemaNETEndpoint *successfulEndpoint;
@property (nonatomic) char hasSuccessfulEndpoint;
@property (retain, nonatomic) NETSchemaNETEndpoint *preferredEndpoint;
@property (nonatomic) char hasPreferredEndpoint;
@property (nonatomic) unsigned int endpointCount;
@property (nonatomic) char hasEndpointCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDuration;
- (void)deleteEndpointCount;
- (void)deletePreferredEndpoint;
- (void)deleteResolutionSource;
- (void)deleteSuccessfulEndpoint;
- (id)suppressMessageUnderConditions;

@end
