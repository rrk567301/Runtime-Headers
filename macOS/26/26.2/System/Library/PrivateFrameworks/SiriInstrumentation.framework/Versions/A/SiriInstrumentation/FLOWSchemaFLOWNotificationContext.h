@class NSData;

@interface FLOWSchemaFLOWNotificationContext : SISchemaInstrumentationMessage {
    struct { unsigned char isLongNotification : 1; unsigned char isSummarized : 1; unsigned char isHighlight : 1; } _has;
}

@property (nonatomic) BOOL isLongNotification;
@property (nonatomic) BOOL hasIsLongNotification;
@property (nonatomic) BOOL isSummarized;
@property (nonatomic) BOOL hasIsSummarized;
@property (nonatomic) BOOL isHighlight;
@property (nonatomic) BOOL hasIsHighlight;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteIsHighlight;
- (void)deleteIsLongNotification;
- (void)deleteIsSummarized;

@end
