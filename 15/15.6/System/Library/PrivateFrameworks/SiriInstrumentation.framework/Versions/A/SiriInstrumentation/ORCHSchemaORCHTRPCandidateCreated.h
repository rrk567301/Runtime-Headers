@class NSArray, NSData, SISchemaUUID;

@interface ORCHSchemaORCHTRPCandidateCreated : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *rootTrpId;
@property (nonatomic) char hasRootTrpId;
@property (copy, nonatomic) NSArray *userTrpIds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)userTrpIdsCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearUserTrpIds;
- (void)deleteRootTrpId;
- (void)addUserTrpIds:(id)a0;
- (void)deleteUserTrpIds;
- (id)suppressMessageUnderConditions;
- (id)userTrpIdsAtIndex:(unsigned long long)a0;

@end
