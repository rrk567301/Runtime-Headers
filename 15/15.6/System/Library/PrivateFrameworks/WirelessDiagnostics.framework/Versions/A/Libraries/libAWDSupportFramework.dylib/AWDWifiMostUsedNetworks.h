@class NSData, NSString;

@interface AWDWifiMostUsedNetworks : PBCodable <NSCopying> {
    struct { unsigned char timeUsed : 1; unsigned char apOUI : 1; unsigned char networkScore : 1; unsigned char networkScoreBitMap : 1; unsigned char securityType : 1; unsigned char switchToCount : 1; unsigned char switchedAwayFromCount : 1; unsigned char timeUsedMinutes : 1; } _has;
}

@property (nonatomic) char hasApOUI;
@property (nonatomic) unsigned int apOUI;
@property (nonatomic) char hasSecurityType;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) char hasTimeUsed;
@property (nonatomic) double timeUsed;
@property (readonly, nonatomic) char hasApOui;
@property (retain, nonatomic) NSData *apOui;
@property (nonatomic) char hasTimeUsedMinutes;
@property (nonatomic) unsigned int timeUsedMinutes;
@property (nonatomic) char hasNetworkScoreBitMap;
@property (nonatomic) unsigned int networkScoreBitMap;
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
