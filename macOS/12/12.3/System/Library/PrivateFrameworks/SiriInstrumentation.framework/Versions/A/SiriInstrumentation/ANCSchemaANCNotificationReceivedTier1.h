@class NSString, NSData, SISchemaUUID;

@interface ANCSchemaANCNotificationReceivedTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char isRedactedDueToOptOut : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) BOOL hasAppBundleId;
@property (nonatomic) BOOL isRedactedDueToOptOut;
@property (nonatomic) BOOL hasIsRedactedDueToOptOut;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLinkId;
- (void)deleteAppBundleId;
- (void)deleteIsRedactedDueToOptOut;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
