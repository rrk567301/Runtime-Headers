@class NSString, NSArray, NSNumber;

@interface WiFiUsageBssDetails : NSObject <NSCopying>

@property (copy, nonatomic) NSString *bssid;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (nonatomic) int phyMode;
@property (nonatomic) long long apMode;
@property (nonatomic) int band;
@property (nonatomic) long long channel;
@property (nonatomic) long long channelWidth;
@property (nonatomic) unsigned long long channelFlags;
@property (nonatomic) long long rssi;
@property (nonatomic) char isEdgeBss;
@property (nonatomic) unsigned long long currentMloLinksCount;
@property (nonatomic) int currentMloPreferredBand;
@property (retain, nonatomic) NSArray *currentMloLinks;
@property (retain, nonatomic) NSNumber *mloTrafficSwitchEnabled;
@property (copy, nonatomic) NSString *apProfile;
@property (nonatomic) long long nSS;
@property (nonatomic) char hasAppleIE;
@property (nonatomic) char hasInterworkingIE;
@property (nonatomic) char hasWpsIE;
@property (nonatomic) char hasDomainName;
@property (nonatomic) char hasNaiRealms;
@property (nonatomic) char hasRoamingOis;
@property (nonatomic) unsigned long long networkAccessCode;
@property (nonatomic) unsigned long long venueGroup;
@property (nonatomic) unsigned long long venueCode;
@property (copy, nonatomic) NSString *manufacturerName;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *modelNumber;
@property (copy, nonatomic) NSString *deviceVersion;
@property (nonatomic) char hasColocatedMLOs;

+ (id)bssWithIdentifier:(id)a0 apProfile:(id)a1 apMode:(long long)a2 phyMode:(int)a3 channel:(long long)a4 channelFlags:(unsigned long long)a5 channelWidth:(long long)a6 rssi:(long long)a7 latitude:(double)a8 longitude:(double)a9 isEdgeBss:(char)a10;
+ (id)bssWithIdentifier:(id)a0 channel:(long long)a1 channelFlags:(unsigned long long)a2 rssi:(long long)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)eventDictionary:(char)a0;
- (char)isOnChannel:(id)a0;
- (void)updateMLORuntimeConfig:(struct { unsigned long long x0; int x1[3]; int x2; char x3; })a0;

@end
