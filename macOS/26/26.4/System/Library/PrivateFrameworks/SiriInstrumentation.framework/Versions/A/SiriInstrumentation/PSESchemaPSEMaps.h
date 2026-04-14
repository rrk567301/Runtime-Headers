@class NSData, PSESchemaPSEMapsUserFollowup;

@interface PSESchemaPSEMaps : SISchemaInstrumentationMessage {
    struct { unsigned char isSiriResultUseful : 1; } _has;
}

@property (nonatomic) BOOL isSiriResultUseful;
@property (nonatomic) BOOL hasIsSiriResultUseful;
@property (retain, nonatomic) PSESchemaPSEMapsUserFollowup *followup;
@property (nonatomic) BOOL hasFollowup;
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
- (void)deleteFollowup;
- (void)deleteIsSiriResultUseful;

@end
