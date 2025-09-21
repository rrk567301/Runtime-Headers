@class NSData;

@interface PSESchemaPSEAlarm : SISchemaInstrumentationMessage {
    struct { unsigned char isSiriResultUseful : 1; unsigned char followUpType : 1; } _has;
}

@property (nonatomic) char isSiriResultUseful;
@property (nonatomic) char hasIsSiriResultUseful;
@property (nonatomic) int followUpType;
@property (nonatomic) char hasFollowUpType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFollowUpType;
- (void)deleteIsSiriResultUseful;
- (id)suppressMessageUnderConditions;

@end
