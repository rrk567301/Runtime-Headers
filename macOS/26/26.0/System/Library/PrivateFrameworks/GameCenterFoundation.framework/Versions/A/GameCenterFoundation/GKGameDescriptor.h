@class NSNumber, NSString;

@interface GKGameDescriptor : GKInternalRepresentation

@property (retain, nonatomic) NSNumber *adamID;
@property (retain, nonatomic) NSNumber *externalVersion;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *shortBundleVersion;
@property (nonatomic) long long platform;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;
+ (long long)currentPlatform;
+ (BOOL)supportsPlatform:(long long)a0;
+ (id)supportedPlatforms;
+ (id)currentPlatformServerPushString;
+ (id)currentPlatformServerString;
+ (id)gameDescriptorWithBundleID:(id)a0 bundleVersion:(id)a1 shortBundleVersion:(id)a2 adamID:(id)a3;
+ (long long)gamePlatformFromServerGameDescriptorString:(id)a0;
+ (long long)gamePlatformFromServerPushString:(id)a0;
+ (unsigned int)gamePlatformSetForGamePlatformStrings:(id)a0;
+ (unsigned int)gamePlatformSetFromGamePlatform:(long long)a0;
+ (id)gamePlatformStringSetFromGamePlatformSet:(unsigned int)a0;
+ (id)stringForPlatform:(long long)a0;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryForRequest;
- (id)initWithPushDictionary:(id)a0;

@end
