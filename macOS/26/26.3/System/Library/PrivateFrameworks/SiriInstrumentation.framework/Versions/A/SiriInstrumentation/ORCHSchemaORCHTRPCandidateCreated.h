@class NSArray, NSData, SISchemaUUID;

@interface ORCHSchemaORCHTRPCandidateCreated : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *rootTrpId;
@property (nonatomic) BOOL hasRootTrpId;
@property (copy, nonatomic) NSArray *userTrpIds;
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
- (void)clearUserTrpIds;
- (unsigned long long)userTrpIdsCount;
- (void)deleteRootTrpId;
- (void)addUserTrpIds:(id)a0;
- (void)deleteUserTrpIds;
- (id)userTrpIdsAtIndex:(unsigned long long)a0;

@end
