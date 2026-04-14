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

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAppBundleId;
- (void)deleteIsRedactedDueToOptOut;
- (void)deleteLinkId;

@end
