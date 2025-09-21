@class NSData;

@interface CDASchemaCDAAdvertisementData : SISchemaInstrumentationMessage {
    struct { unsigned char audioHash : 1; unsigned char goodnessScore : 1; unsigned char confidenceScore : 1; unsigned char deviceClass : 1; unsigned char deviceGroup : 1; unsigned char productType : 1; unsigned char tieBreaker : 1; unsigned char isFromContextCollector : 1; unsigned char isSelf : 1; } _has;
}

@property (nonatomic) unsigned int audioHash;
@property (nonatomic) char hasAudioHash;
@property (nonatomic) unsigned int goodnessScore;
@property (nonatomic) char hasGoodnessScore;
@property (nonatomic) unsigned int confidenceScore;
@property (nonatomic) char hasConfidenceScore;
@property (nonatomic) unsigned int deviceClass;
@property (nonatomic) char hasDeviceClass;
@property (nonatomic) unsigned int deviceGroup;
@property (nonatomic) char hasDeviceGroup;
@property (nonatomic) unsigned int productType;
@property (nonatomic) char hasProductType;
@property (nonatomic) unsigned int tieBreaker;
@property (nonatomic) char hasTieBreaker;
@property (nonatomic) char isFromContextCollector;
@property (nonatomic) char hasIsFromContextCollector;
@property (nonatomic) char isSelf;
@property (nonatomic) char hasIsSelf;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAudioHash;
- (void)deleteConfidenceScore;
- (void)deleteDeviceClass;
- (void)deleteDeviceGroup;
- (void)deleteGoodnessScore;
- (void)deleteIsFromContextCollector;
- (void)deleteIsSelf;
- (void)deleteProductType;
- (void)deleteTieBreaker;
- (id)suppressMessageUnderConditions;

@end
