@class NSString, NSData;

@interface PSESchemaPSEHomeFollowUp : SISchemaInstrumentationMessage {
    struct { unsigned char followUpType : 1; unsigned char followUpSource : 1; unsigned char isFollowUpInSameContainerAsSiriRequest : 1; unsigned char followUpDayOfWeek : 1; unsigned char followUpHourOfDay : 1; unsigned char followUpDurationSinceSiriRequestInSeconds : 1; } _has;
}

@property (nonatomic) int followUpType;
@property (nonatomic) char hasFollowUpType;
@property (nonatomic) int followUpSource;
@property (nonatomic) char hasFollowUpSource;
@property (copy, nonatomic) NSString *followUpAccessoryType;
@property (nonatomic) char hasFollowUpAccessoryType;
@property (nonatomic) char isFollowUpInSameContainerAsSiriRequest;
@property (nonatomic) char hasIsFollowUpInSameContainerAsSiriRequest;
@property (nonatomic) unsigned int followUpDayOfWeek;
@property (nonatomic) char hasFollowUpDayOfWeek;
@property (nonatomic) unsigned int followUpHourOfDay;
@property (nonatomic) char hasFollowUpHourOfDay;
@property (nonatomic) unsigned int followUpDurationSinceSiriRequestInSeconds;
@property (nonatomic) char hasFollowUpDurationSinceSiriRequestInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFollowUpAccessoryType;
- (void)deleteFollowUpDayOfWeek;
- (void)deleteFollowUpDurationSinceSiriRequestInSeconds;
- (void)deleteFollowUpHourOfDay;
- (void)deleteFollowUpSource;
- (void)deleteFollowUpType;
- (void)deleteIsFollowUpInSameContainerAsSiriRequest;
- (id)suppressMessageUnderConditions;

@end
