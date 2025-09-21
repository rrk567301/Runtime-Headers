@class NSData;

@interface FLOWSchemaFLOWNotificationContext : SISchemaInstrumentationMessage {
    struct { unsigned char isLongNotification : 1; unsigned char isSummarized : 1; unsigned char isHighlight : 1; } _has;
}

@property (nonatomic) char isLongNotification;
@property (nonatomic) char hasIsLongNotification;
@property (nonatomic) char isSummarized;
@property (nonatomic) char hasIsSummarized;
@property (nonatomic) char isHighlight;
@property (nonatomic) char hasIsHighlight;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsHighlight;
- (void)deleteIsLongNotification;
- (void)deleteIsSummarized;
- (id)suppressMessageUnderConditions;

@end
