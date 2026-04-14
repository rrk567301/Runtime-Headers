@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSEntityInfo : SISchemaInstrumentationMessage {
    struct { unsigned char confidence : 1; } _has;
}

@property (copy, nonatomic) NSString *entityId;
@property (nonatomic) BOOL hasEntityId;
@property (nonatomic) float confidence;
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteConfidence;
- (void)deleteEntityId;

@end
