@class INFERENCESchemaINFERENCEResolverConfig, NSData;

@interface INFERENCESchemaINFERENCEResolutionRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char slotType : 1; } _has;
}

@property (nonatomic) int slotType;
@property (nonatomic) char hasSlotType;
@property (retain, nonatomic) INFERENCESchemaINFERENCEResolverConfig *resolverConfig;
@property (nonatomic) char hasResolverConfig;
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
- (void)deleteResolverConfig;
- (void)deleteSlotType;
- (id)suppressMessageUnderConditions;

@end
