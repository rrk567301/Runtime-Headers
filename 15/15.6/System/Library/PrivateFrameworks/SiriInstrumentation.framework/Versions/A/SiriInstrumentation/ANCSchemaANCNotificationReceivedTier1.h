@class NSString, NSData, SISchemaUUID;

@interface ANCSchemaANCNotificationReceivedTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char isRedactedDueToOptOut : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) char hasAppBundleId;
@property (nonatomic) char isRedactedDueToOptOut;
@property (nonatomic) char hasIsRedactedDueToOptOut;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAppBundleId;
- (void)deleteIsRedactedDueToOptOut;
- (void)deleteLinkId;
- (id)suppressMessageUnderConditions;

@end
