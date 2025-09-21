@class NSData, SISchemaUUID;

@interface CDASchemaCDAParticipant : SISchemaInstrumentationMessage {
    struct { unsigned char goodnessScore : 1; unsigned char deviceClass : 1; unsigned char productType : 1; } _has;
}

@property (nonatomic) unsigned int goodnessScore;
@property (nonatomic) char hasGoodnessScore;
@property (nonatomic) int deviceClass;
@property (nonatomic) char hasDeviceClass;
@property (nonatomic) unsigned int productType;
@property (nonatomic) char hasProductType;
@property (retain, nonatomic) SISchemaUUID *electionParticipantId;
@property (nonatomic) char hasElectionParticipantId;
@property (retain, nonatomic) SISchemaUUID *rotatedElectionParticipantId;
@property (nonatomic) char hasRotatedElectionParticipantId;
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
- (void)deleteDeviceClass;
- (void)deleteElectionParticipantId;
- (void)deleteGoodnessScore;
- (void)deleteProductType;
- (void)deleteRotatedElectionParticipantId;
- (id)suppressMessageUnderConditions;

@end
