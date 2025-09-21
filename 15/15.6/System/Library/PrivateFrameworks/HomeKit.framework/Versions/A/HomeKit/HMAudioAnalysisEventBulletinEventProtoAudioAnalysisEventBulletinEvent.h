@class NSString;

@interface HMAudioAnalysisEventBulletinEventProtoAudioAnalysisEventBulletinEvent : PBCodable <NSCopying> {
    struct { unsigned char dateOfOccurrence : 1; unsigned char eventStartDate : 1; unsigned char reason : 1; unsigned char state : 1; } _has;
}

@property (readonly, nonatomic) char hasThreadIdentifier;
@property (retain, nonatomic) NSString *threadIdentifier;
@property (nonatomic) char hasState;
@property (nonatomic) long long state;
@property (nonatomic) char hasReason;
@property (nonatomic) long long reason;
@property (readonly, nonatomic) char hasNotificationUUID;
@property (retain, nonatomic) NSString *notificationUUID;
@property (nonatomic) char hasDateOfOccurrence;
@property (nonatomic) long long dateOfOccurrence;
@property (readonly, nonatomic) char hasAccessoryIdentifier;
@property (retain, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) char hasHomeIdentifier;
@property (retain, nonatomic) NSString *homeIdentifier;
@property (nonatomic) char hasEventStartDate;
@property (nonatomic) long long eventStartDate;

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

@end
