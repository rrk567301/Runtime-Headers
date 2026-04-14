@class NSData;

@interface PSESchemaPSEAlarm : SISchemaInstrumentationMessage {
    struct { unsigned char isSiriResultUseful : 1; unsigned char followUpType : 1; } _has;
}

@property (nonatomic) BOOL isSiriResultUseful;
@property (nonatomic) BOOL hasIsSiriResultUseful;
@property (nonatomic) int followUpType;
@property (nonatomic) BOOL hasFollowUpType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteFollowUpType;
- (void)deleteIsSiriResultUseful;

@end
