@interface WiFiAnalyticsAWDSlowWiFiNotification : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char actionField : 1; unsigned char recoveryAction : 1; unsigned char recoveryReason : 1; unsigned char userInput : 1; unsigned char facetimeCallInProgress : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasActionField;
@property (nonatomic) unsigned int actionField;
@property (nonatomic) char hasRecoveryAction;
@property (nonatomic) unsigned int recoveryAction;
@property (nonatomic) char hasRecoveryReason;
@property (nonatomic) unsigned int recoveryReason;
@property (nonatomic) char hasUserInput;
@property (nonatomic) unsigned int userInput;
@property (nonatomic) char hasFacetimeCallInProgress;
@property (nonatomic) char facetimeCallInProgress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
