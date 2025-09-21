@class NSData;

@interface ODDSiriSchemaODDAutoSendMessageProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isAutomaticallySendMessagesEnabled : 1; unsigned char isEnabledForHeadphones : 1; unsigned char isEnabledForCarPlay : 1; } _has;
}

@property (nonatomic) BOOL isAutomaticallySendMessagesEnabled;
@property (nonatomic) BOOL hasIsAutomaticallySendMessagesEnabled;
@property (nonatomic) BOOL isEnabledForHeadphones;
@property (nonatomic) BOOL hasIsEnabledForHeadphones;
@property (nonatomic) BOOL isEnabledForCarPlay;
@property (nonatomic) BOOL hasIsEnabledForCarPlay;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteIsAutomaticallySendMessagesEnabled;
- (void)deleteIsEnabledForCarPlay;
- (void)deleteIsEnabledForHeadphones;

@end
