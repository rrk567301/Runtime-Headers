@class NETSchemaNETEndpoint, NSData;

@interface NETSchemaNETEstablishmentResolution : SISchemaInstrumentationMessage {
    struct { unsigned char duration : 1; unsigned char resolutionSource : 1; unsigned char endpointCount : 1; } _has;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int resolutionSource;
@property (nonatomic) BOOL hasResolutionSource;
@property (retain, nonatomic) NETSchemaNETEndpoint *successfulEndpoint;
@property (nonatomic) BOOL hasSuccessfulEndpoint;
@property (retain, nonatomic) NETSchemaNETEndpoint *preferredEndpoint;
@property (nonatomic) BOOL hasPreferredEndpoint;
@property (nonatomic) unsigned int endpointCount;
@property (nonatomic) BOOL hasEndpointCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDuration;
- (void)deleteEndpointCount;
- (void)deletePreferredEndpoint;
- (void)deleteResolutionSource;
- (void)deleteSuccessfulEndpoint;

@end
