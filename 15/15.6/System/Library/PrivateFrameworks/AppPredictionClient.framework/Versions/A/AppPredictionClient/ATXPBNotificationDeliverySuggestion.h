@class ATXPBSendToDigestSuggestion, ATXPBNotificationQuietingSuggestion, NSString, ATXPBNotificationPromotingSuggestion, ATXPBUrgencyTuningSuggestion, ATXPBSendMessagesToDigestSuggestion, ATXPBInterruptionManagerTuningSuggestion, ATXPBTurnOffNotificationsForAppSuggestion, ATXPBNotificationSmartPauseSuggestion;

@interface ATXPBNotificationDeliverySuggestion : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char oneofNotificationDeliverySuggestion : 1; unsigned char scope : 1; } _has;
}

@property (readonly, nonatomic) char hasSmartPause;
@property (retain, nonatomic) ATXPBNotificationSmartPauseSuggestion *smartPause;
@property (readonly, nonatomic) char hasQuieting;
@property (retain, nonatomic) ATXPBNotificationQuietingSuggestion *quieting;
@property (readonly, nonatomic) char hasPromoting;
@property (retain, nonatomic) ATXPBNotificationPromotingSuggestion *promoting;
@property (readonly, nonatomic) char hasInterruptionManagerTuning;
@property (retain, nonatomic) ATXPBInterruptionManagerTuningSuggestion *interruptionManagerTuning;
@property (readonly, nonatomic) char hasSendToDigest;
@property (retain, nonatomic) ATXPBSendToDigestSuggestion *sendToDigest;
@property (readonly, nonatomic) char hasUrgencyTuning;
@property (retain, nonatomic) ATXPBUrgencyTuningSuggestion *urgencyTuning;
@property (readonly, nonatomic) char hasSendMessagesToDigest;
@property (retain, nonatomic) ATXPBSendMessagesToDigestSuggestion *sendMessagesToDigest;
@property (readonly, nonatomic) char hasTurnOffNotificationsForApp;
@property (retain, nonatomic) ATXPBTurnOffNotificationsForAppSuggestion *turnOffNotificationsForApp;
@property (nonatomic) char hasOneofNotificationDeliverySuggestion;
@property (nonatomic) int oneofNotificationDeliverySuggestion;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasScope;
@property (nonatomic) int scope;
@property (readonly, nonatomic) char hasEntityIdentifier;
@property (retain, nonatomic) NSString *entityIdentifier;
@property (readonly, nonatomic) char hasTriggerNotificationUUID;
@property (retain, nonatomic) NSString *triggerNotificationUUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsOneofNotificationDeliverySuggestion:(id)a0;
- (void)clearOneofValuesForOneofNotificationDeliverySuggestion;
- (id)oneofNotificationDeliverySuggestionAsString:(int)a0;

@end
