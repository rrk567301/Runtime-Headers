@class NSData;

@interface CDASchemaCDAParticipant : SISchemaInstrumentationMessage {
    struct { unsigned char goodnessScore : 1; unsigned char deviceClass : 1; unsigned char productType : 1; } _has;
}

@property (nonatomic) unsigned int goodnessScore;
@property (nonatomic) BOOL hasGoodnessScore;
@property (nonatomic) int deviceClass;
@property (nonatomic) BOOL hasDeviceClass;
@property (nonatomic) unsigned int productType;
@property (nonatomic) BOOL hasProductType;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteGoodnessScore;
- (void)deleteDeviceClass;
- (void)deleteProductType;

@end
