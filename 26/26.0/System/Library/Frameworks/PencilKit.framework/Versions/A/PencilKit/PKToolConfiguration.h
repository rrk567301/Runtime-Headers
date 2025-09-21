@class NSColor, PKFloatRange;

@interface PKToolConfiguration : NSObject <NSCopying> {
    PKFloatRange *_cachedStrokeWeightRange;
    BOOL _wantsStrokeWeightControl;
    BOOL _wantsTopLevelOpacityControl;
}

@property (readonly, nonatomic) BOOL supportsColor;
@property (readonly, nonatomic) NSColor *defaultColor;
@property (readonly, nonatomic) BOOL supportsOpacity;
@property (readonly, nonatomic) BOOL isEraserTool;

+ (id)_assetNamesByAzimuthForToolWithIdentifier:(id)a0;
+ (id)_assetNamesByWeightForToolWithIdentifier:(id)a0;
+ (id)_orderedAzimuthValuesForToolWithIdentifier:(id)a0;
+ (BOOL)_supportsAzimuthControlForToolWithIdentifier:(id)a0;
+ (id)_weightsForToolWithIdentifier:(id)a0;
+ (id)defaultColorForInkingToolWithIdentifier:(id)a0;
+ (id)defaultLocalizedNameForInkingToolWithIdentifier:(id)a0;
+ (id)p_azimuthAssetNameForToolIdentifier:(id)a0 assetNumber:(unsigned long long)a1;
+ (id)p_widthAssetNameForToolIdentifier:(id)a0 assetNumber:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setSupportsColor:(BOOL)a0 andOpacity:(BOOL)a1;
- (void)setSupportsColor:(BOOL)a0 andOpacity:(BOOL)a1 defaultColor:(id)a2;

@end
