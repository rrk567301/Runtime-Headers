@class NSString;

@interface WiFiUsageAccessPointProfile : NSObject

@property (retain, nonatomic) NSString *bssid;
@property (retain, nonatomic) NSString *apProfile;
@property (nonatomic) BOOL hasColocatedMLOs;

+ (id)_config;
+ (void)_saveToUserDefaults:(id)a0 withKey:(id)a1 andValue:(id)a2;
+ (void)updateWithAssocTime:(double)a0 forBssid:(id)a1;
+ (id)beaconsAndWPSInfo;
+ (BOOL)_isProfileValidForUse:(id)a0 withCachedDict:(id)a1 onlyIfCurrent:(BOOL)a2 withError:(id *)a3;
+ (void)initialize;
+ (id)profileFromBeaconData:(id)a0 andParsedIE:(id)a1;
+ (id)profileForBSSID:(id)a0 withError:(id *)a1;
+ (id)errorStringForTelemetry:(id)a0;
+ (id)_toMobileAssetsProfile:(id)a0;
+ (id)_loadFromUserDefaults:(id)a0 withKey:(id)a1 withCachedData:(id)a2;
+ (void)submitToCAForBSSID:(id)a0;
+ (id)apNameForBSSID:(id)a0;
+ (void)_defaults;
+ (id)_cachedProfile:(id)a0;
+ (id)shortProfileForBSSID:(id)a0 withError:(id *)a1;
+ (BOOL)_compareBytes:(id)a0 FromStart:(unsigned long long)a1 WithLen:(unsigned long long)a2 With:(id)a3;
+ (id)_getDefaults;
+ (id)profileForBSSID:(id)a0 onlyIfCurrent:(BOOL)a1 withError:(id *)a2;
+ (void)updateConfig;
+ (id)_getBinTimeInterval:(double)a0 As:(unsigned long long)a1;
+ (void)_cleanUpStaleProfiles;
+ (void)updateWithWPS:(id)a0;
+ (void)setMaxProfiles:(unsigned long long)a0;
+ (id)prefixForCA;
+ (id)profileForBSSID:(id)a0;
+ (BOOL)_isProfileValidForUse:(id)a0 withCachedDict:(id)a1 withError:(id *)a2;
+ (void)_endPrevAssoc;
+ (void)_submitProfileFor:(id)a0 withCachedDict:(id)a1 AndEraseWithLog:(id)a2;
+ (id)_loadFromUserDefaults:(id)a0 withKey:(id)a1 withCachedData:(id)a2 withError:(id *)a3;
+ (BOOL)_isProfileValidForStorage:(id)a0;
+ (void)_applyMask:(id)a0 FromStart:(unsigned long long)a1 WithLen:(unsigned long long)a2 WithMask:(id)a3 AppendTo:(id)a4;
+ (id)longProfileForBSSID:(id)a0 withError:(id *)a1;
+ (void)_extractFieldsFor:(id)a0 From:(id)a1 Into:(id)a2;

- (void).cxx_destruct;

@end
