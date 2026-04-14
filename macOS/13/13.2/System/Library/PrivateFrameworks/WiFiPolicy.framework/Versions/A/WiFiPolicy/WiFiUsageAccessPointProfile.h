@class NSString;

@interface WiFiUsageAccessPointProfile : NSObject

@property (retain, nonatomic) NSString *bssid;
@property (retain, nonatomic) NSString *apProfile;

+ (void)initialize;
+ (id)_config;
+ (void)_defaults;
+ (void)updateConfig;
+ (id)prefixForCA;
+ (void)setMaxProfiles:(unsigned long long)a0;
+ (id)_getDefaults;
+ (BOOL)_isProfileValidForStorage:(id)a0;
+ (void)_cleanUpStaleProfiles;
+ (void)_endPrevAssoc;
+ (BOOL)_compareBytes:(id)a0 FromStart:(unsigned long long)a1 WithLen:(unsigned long long)a2 With:(id)a3;
+ (void)_applyMask:(id)a0 FromStart:(unsigned long long)a1 WithLen:(unsigned long long)a2 WithMask:(id)a3 AppendTo:(id)a4;
+ (void)_extractFieldsFor:(id)a0 From:(id)a1 Into:(id)a2;
+ (id)_toMobileAssetsProfile:(id)a0;
+ (id)_loadFromUserDefaults:(id)a0 withKey:(id)a1 withCachedData:(id)a2;
+ (void)_saveToUserDefaults:(id)a0 withKey:(id)a1 andValue:(id)a2;
+ (id)_cachedProfile:(id)a0;
+ (id)profileFromBeaconData:(id)a0 andParsedIE:(id)a1;
+ (void)updateWithWPS:(id)a0;
+ (void)updateWithAssocTime:(double)a0 forBssid:(id)a1;
+ (void)_submitProfileFor:(id)a0 withCachedDict:(id)a1 AndEraseWithLog:(id)a2;
+ (id)_getBinTimeInterval:(double)a0 As:(unsigned long long)a1;
+ (BOOL)_isProfileValidForUse:(id)a0 withCachedDict:(id)a1;
+ (id)profileForBSSID:(id)a0;
+ (id)longProfileForBSSID:(id)a0;
+ (id)shortProfileForBSSID:(id)a0;
+ (id)beacons;
+ (id)apNameForBSSID:(id)a0;

- (void).cxx_destruct;

@end
