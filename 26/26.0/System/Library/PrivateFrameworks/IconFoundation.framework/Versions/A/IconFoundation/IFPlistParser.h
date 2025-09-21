@class NSDictionary, NSString;

@interface IFPlistParser : NSObject

@property (readonly, copy) NSDictionary *infoDictionary;
@property (readonly) unsigned long long supportedPlatform;
@property (readonly) unsigned long long iconPlatform;
@property (readonly) unsigned long long uiDeviceFamily;
@property (readonly, copy) NSDictionary *iconContent;
@property (readonly, copy) NSDictionary *iconDictionary;
@property (readonly, copy) NSString *catalogAssetName;
@property (nonatomic) BOOL captureAccentColorInfo;

+ (id)catalogAssetExcerptForAssetName:(id)a0 style:(unsigned long long)a1;
+ (id)fileAssetsExcerptForFilenames:(id)a0 style:(unsigned long long)a1;
+ (id)grahpicIconExcerptForConfigDictionary:(id)a0;
+ (id)topLevelAppBundleIconKeys;

- (void).cxx_destruct;
- (id)catalogAssetNamesReturningPlistExcerpt:(id *)a0;
- (BOOL)hasGraphicIconReturningPlistExcerpt:(id *)a0;
- (id)initWithInfoDictionary:(id)a0;
- (id)looseFilesNamesReturningPlistExcerpt:(id *)a0;
- (id)subDictionaryForAlternateIconName:(id)a0 variants:(id)a1;

@end
