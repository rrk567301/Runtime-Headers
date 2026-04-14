@class NSData;

@interface ORCHSchemaORCHNLClassicDeprecationFlags : SISchemaInstrumentationMessage {
    struct { unsigned char isNLServerFallbackDisabled : 1; unsigned char isDomainServerFallbackDisabled : 1; } _has;
}

@property (nonatomic) BOOL isNLServerFallbackDisabled;
@property (nonatomic) BOOL hasIsNLServerFallbackDisabled;
@property (nonatomic) BOOL isDomainServerFallbackDisabled;
@property (nonatomic) BOOL hasIsDomainServerFallbackDisabled;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsDomainServerFallbackDisabled;
- (void)deleteIsNLServerFallbackDisabled;

@end
