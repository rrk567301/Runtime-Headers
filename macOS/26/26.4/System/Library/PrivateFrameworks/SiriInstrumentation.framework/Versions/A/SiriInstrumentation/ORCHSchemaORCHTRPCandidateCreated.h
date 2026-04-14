@class NSArray, NSData, SISchemaUUID;

@interface ORCHSchemaORCHTRPCandidateCreated : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *rootTrpId;
@property (nonatomic) BOOL hasRootTrpId;
@property (copy, nonatomic) NSArray *userTrpIds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearUserTrpIds;
- (void)deleteRootTrpId;
- (unsigned long long)userTrpIdsCount;
- (void)addUserTrpIds:(id)a0;
- (void)deleteUserTrpIds;
- (id)userTrpIdsAtIndex:(unsigned long long)a0;

@end
