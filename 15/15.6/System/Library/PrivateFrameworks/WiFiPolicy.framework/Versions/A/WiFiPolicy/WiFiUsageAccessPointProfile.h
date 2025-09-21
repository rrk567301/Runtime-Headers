@class NSString;

@interface WiFiUsageAccessPointProfile : NSObject

@property (retain, nonatomic) NSString *bssid;
@property (retain, nonatomic) NSString *apProfile;
@property (nonatomic) char hasColocatedMLOs;

+ (void)initialize;
+ (void)_defaults;
+ (id)_cachedProfile:(id)a0;
+ (id)_config;
+ (id)apNameForBSSID:(id)a0;
+ (void)setMaxProfiles:(unsigned long long)a0;
+ (void)_applyMask:(id)a0 FromStart:(unsigned long long)a1 WithLen:(unsigned long long)a2 WithMask:(id)a3 AppendTo:(id)a4;
+ (void)_cleanUpStaleProfiles;
+ (char)_compareBytes:(id)a0 FromStart:(unsigned long long)a1 WithLen:(unsigned long long)a2 With:(id)a3;
+ (void)_endPrevAssoc;
+ (void)_extractFieldsFor:(id)a0 From:(id)a1 Into:(id)a2;
+ (id)_getBinTimeInterval:(double)a0 As:(unsigned long long)a1;
+ (id)_getDefaults;
+ (char)_isProfileValidForStorage:(id)a0;
+ (char)_isProfileValidForUse:(id)a0 withCachedDict:(id)a1;
+ (char)_isProfileValidForUse:(id)a0 withCachedDict:(id)a1 onlyIfCurrent:(char)a2;
+ (id)_loadFromUserDefaults:(id)a0 withKey:(id)a1 withCachedData:(id)a2;
+ (void)_saveToUserDefaults:(id)a0 withKey:(id)a1 andValue:(id)a2;
+ (void)_submitProfileFor:(id)a0 withCachedDict:(id)a1 AndEraseWithLog:(id)a2;
+ (id)_toMobileAssetsProfile:(id)a0;
+ (id)beaconsAndWPSInfo;
+ (id)longProfileForBSSID:(id)a0;
+ (id)prefixForCA;
+ (id)profileForBSSID:(id)a0;
+ (id)profileForBSSID:(id)a0 onlyIfCurrent:(char)a1;
+ (id)profileFromBeaconData:(id)a0 andParsedIE:(id)a1;
+ (id)shortProfileForBSSID:(id)a0;
+ (void)updateConfig;
+ (void)updateWithAssocTime:(double)a0 forBssid:(id)a1;
+ (void)updateWithWPS:(id)a0;

- (void).cxx_destruct;

@end
