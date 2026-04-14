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

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppBundleId;
- (void)deleteIsRedactedDueToOptOut;
- (void)deleteLinkId;

@end
