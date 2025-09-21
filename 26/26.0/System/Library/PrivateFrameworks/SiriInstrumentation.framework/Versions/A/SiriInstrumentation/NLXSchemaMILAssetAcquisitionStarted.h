@class NSData;

@interface NLXSchemaMILAssetAcquisitionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char model : 1; } _has;
}

@property (nonatomic) int model;
@property (nonatomic) BOOL hasModel;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteModel;

@end
