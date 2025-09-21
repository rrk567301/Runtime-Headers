@class NSData, NSString;

@interface AWDWiFiMetricsKnownNetworksEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char colocatedState : 1; unsigned char eventType : 1; unsigned char networkScore : 1; unsigned char networkSecurity : 1; unsigned char networkTypeBitMap : 1; unsigned char switchToCount : 1; unsigned char switchedAwayFromCount : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasEventType;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) char hasNetworkTypeBitMap;
@property (nonatomic) unsigned int networkTypeBitMap;
@property (nonatomic) char hasNetworkSecurity;
@property (nonatomic) unsigned int networkSecurity;
@property (readonly, nonatomic) char hasOui;
@property (retain, nonatomic) NSData *oui;
@property (nonatomic) char hasColocatedState;
@property (nonatomic) unsigned int colocatedState;
@property (nonatomic) char hasSwitchedAwayFromCount;
@property (nonatomic) unsigned int switchedAwayFromCount;
@property (nonatomic) char hasSwitchToCount;
@property (nonatomic) unsigned int switchToCount;
@property (nonatomic) char hasNetworkScore;
@property (nonatomic) int networkScore;
@property (readonly, nonatomic) char hasBundleID;
@property (retain, nonatomic) NSString *bundleID;

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

@end
