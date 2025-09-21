@class NSData;

@interface NLXSchemaMILAssetAcquisitionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char acquisitionType : 1; } _has;
}

@property (nonatomic) int acquisitionType;
@property (nonatomic) char hasAcquisitionType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAcquisitionType;
- (id)suppressMessageUnderConditions;

@end
