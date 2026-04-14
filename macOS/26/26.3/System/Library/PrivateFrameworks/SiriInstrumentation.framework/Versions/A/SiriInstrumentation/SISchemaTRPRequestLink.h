@class NSData, SISchemaUUID;

@interface SISchemaTRPRequestLink : SISchemaTopLevelUnionType {
    struct { unsigned char source : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) BOOL hasTrpId;
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) BOOL hasRequestId;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (readonly, nonatomic) NSData *jsonData;

- (id)qualifiedMessageName;
- (int)getAnyEventType;
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
- (void)deleteRequestId;
- (void)deleteSource;
- (void)deleteTrpId;

@end
