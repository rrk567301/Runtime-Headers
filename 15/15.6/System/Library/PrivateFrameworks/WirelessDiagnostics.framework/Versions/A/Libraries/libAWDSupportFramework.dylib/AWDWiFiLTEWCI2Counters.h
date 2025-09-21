@class NSMutableArray;

@interface AWDWiFiLTEWCI2Counters : PBCodable <NSCopying> {
    struct { unsigned char lteTxPowerLimitCount : 1; unsigned char lteTxPowerLimitTimeInMS : 1; unsigned char timeSharingWLANIntervalCount : 1; unsigned char timeSharingWLANTimeInMS : 1; unsigned char timestamp : 1; unsigned char type4DueToTimerExpiryCount : 1; unsigned char type4HonouredCount : 1; unsigned char type4HonouredTimeInMS : 1; unsigned char wlanProtectionFramesDueToLTECoexCount : 1; unsigned char wlanRxPriCount : 1; unsigned char wlanRxPriTimeInMS : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasWlanRxPriTimeInMS;
@property (nonatomic) unsigned long long wlanRxPriTimeInMS;
@property (nonatomic) char hasWlanRxPriCount;
@property (nonatomic) unsigned long long wlanRxPriCount;
@property (nonatomic) char hasLteTxPowerLimitTimeInMS;
@property (nonatomic) unsigned long long lteTxPowerLimitTimeInMS;
@property (nonatomic) char hasLteTxPowerLimitCount;
@property (nonatomic) unsigned long long lteTxPowerLimitCount;
@property (nonatomic) char hasType4HonouredTimeInMS;
@property (nonatomic) unsigned long long type4HonouredTimeInMS;
@property (nonatomic) char hasType4HonouredCount;
@property (nonatomic) unsigned long long type4HonouredCount;
@property (nonatomic) char hasTimeSharingWLANTimeInMS;
@property (nonatomic) unsigned long long timeSharingWLANTimeInMS;
@property (nonatomic) char hasTimeSharingWLANIntervalCount;
@property (nonatomic) unsigned long long timeSharingWLANIntervalCount;
@property (nonatomic) char hasWlanProtectionFramesDueToLTECoexCount;
@property (nonatomic) unsigned long long wlanProtectionFramesDueToLTECoexCount;
@property (nonatomic) char hasType4DueToTimerExpiryCount;
@property (nonatomic) unsigned long long type4DueToTimerExpiryCount;
@property (retain, nonatomic) NSMutableArray *wci2Counters;

+ (Class)wci2CountersType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addWci2Counters:(id)a0;
- (void)clearWci2Counters;
- (id)wci2CountersAtIndex:(unsigned long long)a0;
- (unsigned long long)wci2CountersCount;

@end
