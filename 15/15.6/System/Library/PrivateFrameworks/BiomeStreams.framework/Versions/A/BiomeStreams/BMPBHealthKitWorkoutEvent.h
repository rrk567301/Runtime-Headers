@class NSString;

@interface BMPBHealthKitWorkoutEvent : PBCodable <NSCopying> {
    struct { unsigned char eventType : 1; unsigned char isFirstPartyDonation : 1; unsigned char isIndoor : 1; unsigned char isUpdate : 1; } _has;
}

@property (nonatomic) char hasIsFirstPartyDonation;
@property (nonatomic) char isFirstPartyDonation;
@property (nonatomic) char hasIsIndoor;
@property (nonatomic) char isIndoor;
@property (readonly, nonatomic) char hasActivityType;
@property (retain, nonatomic) NSString *activityType;
@property (nonatomic) char hasEventType;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) char hasActivityUUID;
@property (retain, nonatomic) NSString *activityUUID;
@property (nonatomic) char hasIsUpdate;
@property (nonatomic) char isUpdate;

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
- (int)StringAsEventType:(id)a0;
- (id)eventTypeAsString:(int)a0;

@end
