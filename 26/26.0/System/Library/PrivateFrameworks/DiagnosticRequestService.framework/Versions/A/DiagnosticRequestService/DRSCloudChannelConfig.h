@class NSNumber, NSString;

@interface DRSCloudChannelConfig : NSObject

@property (readonly, nonatomic) unsigned char platform;
@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) unsigned char environment;
@property (readonly, nonatomic) BOOL overridesDeviceDefault;
@property (readonly, nonatomic) BOOL isNoSubscriptionConfig;
@property (readonly, nonatomic) BOOL allowsWildcardBuild;
@property (readonly, nonatomic) NSNumber *populationSliceNumber;
@property (readonly, nonatomic) NSString *channelName;
@property (readonly, nonatomic) NSString *channelID;

+ (id)currentDeviceDefaultCloudChannelConfig;
+ (unsigned char)channelTypeForIsInternal:(BOOL)a0 isSeed:(BOOL)a1 isQA:(BOOL)a2 isCarrier:(BOOL)a3;
+ (unsigned short)populationSliceForDevice:(unsigned short)a0;
+ (id)sliceCountForPlatform:(unsigned char)a0 channelType:(unsigned char)a1;
+ (id)_smallPopulationCountDict;
+ (id)channelNameForPlatform:(unsigned char)a0 type:(unsigned char)a1 sliceNum:(id)a2;
+ (id)stringForChannelType:(unsigned char)a0;
+ (id)_watchOSSliceCountDict;
+ (id)_macOSSliceCountDict;
+ (id)_tvOSSliceCountDict;
+ (id)stringForEnvironment:(unsigned char)a0;
+ (id)channelIDForName:(id)a0;
+ (id)_iOSSliceCountDict;
+ (id)staticSnapshotDeviceDefaultCloudChannelConfig;

- (id)debugDescription;
- (id)initWithMO:(id)a0;
- (id)initNoSubscriptionConfig:(BOOL)a0;
- (id)initNoChecksWithPlatform:(unsigned char)a0 channelType:(unsigned char)a1 environment:(unsigned char)a2 populationSliceNumber:(id)a3 overridesDeviceDefault:(BOOL)a4;
- (id)jsonDictionaryRepresentation;
- (id)initWithValidPlatform:(unsigned char)a0 channelType:(unsigned char)a1 environment:(unsigned char)a2 populationSliceNumber:(id)a3 overridesDeviceDefault:(BOOL)a4;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
