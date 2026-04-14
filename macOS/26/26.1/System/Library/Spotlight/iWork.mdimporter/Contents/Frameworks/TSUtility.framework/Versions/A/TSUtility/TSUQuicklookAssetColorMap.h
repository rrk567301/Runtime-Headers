@class NSString, NSMutableDictionary;

@interface TSUQuicklookAssetColorMap : NSObject

@property (retain, nonatomic) NSMutableDictionary *assetMap;
@property (retain, nonatomic) NSString *appAssetPath;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)colorForResource:(id)a0;
+ (BOOL)hasAppAssets;
+ (id)locatorForSageChartTextureSet:(id)a0 image:(id)a1;
+ (id)quicklookAssetMap;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;

@end
