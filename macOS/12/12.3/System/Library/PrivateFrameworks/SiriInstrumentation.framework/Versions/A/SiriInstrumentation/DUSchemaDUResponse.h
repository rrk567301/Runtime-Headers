@class NSData, SISchemaUUID;

@interface DUSchemaDUResponse : SISchemaInstrumentationMessage {
    struct { unsigned char status : 1; } _has;
}

@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) SISchemaUUID *assetIdentifier;
@property (nonatomic) BOOL hasAssetIdentifier;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteStatus;
- (void)deleteAssetIdentifier;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
