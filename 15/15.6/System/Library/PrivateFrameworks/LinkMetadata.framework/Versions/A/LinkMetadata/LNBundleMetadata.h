@class NSArray, NSDictionary, LNBundleMetadataGeneratorDescription, NSString;

@interface LNBundleMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) long long latestMetadataVersion;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *actions;
@property (readonly, copy, nonatomic) NSDictionary *entities;
@property (readonly, copy, nonatomic) NSDictionary *queries;
@property (readonly, copy, nonatomic) NSDictionary *enums;
@property (readonly, nonatomic) long long version;
@property (readonly, copy, nonatomic) LNBundleMetadataGeneratorDescription *generator;
@property (readonly, copy, nonatomic) NSArray *autoShortcuts;
@property (readonly, nonatomic) long long shortcutTileColor;
@property (readonly, copy, nonatomic) NSString *autoShortcutProviderMangledName;
@property (readonly, copy, nonatomic) NSArray *negativePhrases;
@property (readonly, copy, nonatomic) NSArray *examplePhrases;
@property (readonly, copy, nonatomic) NSArray *assistantIntents;
@property (readonly, copy, nonatomic) NSArray *assistantIntentNegativePhrases;
@property (readonly, copy, nonatomic) NSArray *assistantEntities;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithArray:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)verboseDescription;
- (id)_initWithMetadataFileURL:(id)a0 bundleURL:(id)a1 effectiveBundleIdentifier:(id)a2 error:(id *)a3;
- (void)applyAttributionBundleIdentifier:(id)a0 icon:(id)a1;
- (id)initWithActions:(id)a0 entities:(id)a1 queries:(id)a2 enums:(id)a3;
- (id)initWithActions:(id)a0 entities:(id)a1 queries:(id)a2 enums:(id)a3 autoShortcutProviderMangledName:(id)a4 autoShortcuts:(id)a5 shortcutTileColor:(long long)a6 version:(long long)a7 generator:(id)a8;
- (id)initWithActions:(id)a0 entities:(id)a1 queries:(id)a2 enums:(id)a3 autoShortcutProviderMangledName:(id)a4 autoShortcuts:(id)a5 shortcutTileColor:(long long)a6 version:(long long)a7 generator:(id)a8 negativePhrases:(id)a9 examplePhrases:(id)a10;
- (id)initWithActions:(id)a0 entities:(id)a1 queries:(id)a2 enums:(id)a3 autoShortcutProviderMangledName:(id)a4 autoShortcuts:(id)a5 shortcutTileColor:(long long)a6 version:(long long)a7 generator:(id)a8 negativePhrases:(id)a9 examplePhrases:(id)a10 assistantIntents:(id)a11 assistantIntentNegativePhrases:(id)a12;
- (id)initWithActions:(id)a0 entities:(id)a1 queries:(id)a2 enums:(id)a3 autoShortcutProviderMangledName:(id)a4 autoShortcuts:(id)a5 shortcutTileColor:(long long)a6 version:(long long)a7 generator:(id)a8 negativePhrases:(id)a9 examplePhrases:(id)a10 assistantIntents:(id)a11 assistantIntentNegativePhrases:(id)a12 assistantEntities:(id)a13;
- (id)initWithActions:(id)a0 entities:(id)a1 queries:(id)a2 enums:(id)a3 autoShortcutProviderMangledName:(id)a4 autoShortcuts:(id)a5 version:(long long)a6 generator:(id)a7;
- (id)initWithActions:(id)a0 entities:(id)a1 queries:(id)a2 enums:(id)a3 autoShortcuts:(id)a4 version:(long long)a5 generator:(id)a6;
- (id)initWithActions:(id)a0 entities:(id)a1 queries:(id)a2 enums:(id)a3 version:(long long)a4;
- (id)initWithActions:(id)a0 entities:(id)a1 queries:(id)a2 enums:(id)a3 version:(long long)a4 generator:(id)a5;
- (id)initWithBundle:(id)a0 usingEffectiveBundleIdentifier:(id)a1 error:(id *)a2;
- (id)initWithMetadataFileURL:(id)a0 bundleURL:(id)a1 effectiveBundleIdentifier:(id)a2 error:(id *)a3;

@end
