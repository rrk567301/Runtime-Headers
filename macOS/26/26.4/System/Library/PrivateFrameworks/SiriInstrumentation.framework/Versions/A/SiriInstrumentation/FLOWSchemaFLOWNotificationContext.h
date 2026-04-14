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

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsHighlight;
- (void)deleteIsLongNotification;
- (void)deleteIsSummarized;

@end
