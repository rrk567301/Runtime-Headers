@class NSData;

@interface ORCHSchemaORCHNLClassicDeprecationFlags : SISchemaInstrumentationMessage {
    struct { unsigned char isNLServerFallbackDisabled : 1; unsigned char isDomainServerFallbackDisabled : 1; } _has;
}

@property (nonatomic) BOOL isNLServerFallbackDisabled;
@property (nonatomic) BOOL hasIsNLServerFallbackDisabled;
@property (nonatomic) BOOL isDomainServerFallbackDisabled;
@property (nonatomic) BOOL hasIsDomainServerFallbackDisabled;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteIsDomainServerFallbackDisabled;
- (void)deleteIsNLServerFallbackDisabled;

@end
