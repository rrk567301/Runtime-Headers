@class NSString;

@interface HMAudioAnalysisEventBulletinEventProtoAudioAnalysisEventBulletinEvent : PBCodable <NSCopying> {
    struct { unsigned char dateOfOccurrence : 1; unsigned char eventStartDate : 1; unsigned char reason : 1; unsigned char state : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasThreadIdentifier;
@property (retain, nonatomic) NSString *threadIdentifier;
@property (nonatomic) BOOL hasState;
@property (nonatomic) long long state;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) long long reason;
@property (readonly, nonatomic) BOOL hasNotificationUUID;
@property (retain, nonatomic) NSString *notificationUUID;
@property (nonatomic) BOOL hasDateOfOccurrence;
@property (nonatomic) long long dateOfOccurrence;
@property (readonly, nonatomic) BOOL hasAccessoryIdentifier;
@property (retain, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL hasHomeIdentifier;
@property (retain, nonatomic) NSString *homeIdentifier;
@property (nonatomic) BOOL hasEventStartDate;
@property (nonatomic) long long eventStartDate;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
