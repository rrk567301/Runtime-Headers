@class NSData;

@interface ORCHSchemaORCHNLClassicDeprecationFlags : SISchemaInstrumentationMessage {
    struct { unsigned char isNLServerFallbackDisabled : 1; unsigned char isDomainServerFallbackDisabled : 1; } _has;
}

@property (nonatomic) char isNLServerFallbackDisabled;
@property (nonatomic) char hasIsNLServerFallbackDisabled;
@property (nonatomic) char isDomainServerFallbackDisabled;
@property (nonatomic) char hasIsDomainServerFallbackDisabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsDomainServerFallbackDisabled;
- (void)deleteIsNLServerFallbackDisabled;
- (id)suppressMessageUnderConditions;

@end
