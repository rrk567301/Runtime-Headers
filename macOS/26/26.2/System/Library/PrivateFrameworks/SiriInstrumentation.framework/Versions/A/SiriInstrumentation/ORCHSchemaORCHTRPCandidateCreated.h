@class NSArray, NSData, SISchemaUUID;

@interface ORCHSchemaORCHTRPCandidateCreated : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *rootTrpId;
@property (nonatomic) BOOL hasRootTrpId;
@property (copy, nonatomic) NSArray *userTrpIds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteRootTrpId;
- (void)clearUserTrpIds;
- (unsigned long long)userTrpIdsCount;
- (void)addUserTrpIds:(id)a0;
- (void)deleteUserTrpIds;
- (id)userTrpIdsAtIndex:(unsigned long long)a0;

@end
