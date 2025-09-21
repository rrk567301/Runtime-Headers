@interface TDCatalogGlobals : NSManagedObject {
    unsigned long long _defaultBlendMode;
    char _allowsVibrancy;
    char _supportsWhitePointAdjustments;
    char _supportsBrightnessAdjustments;
    char _allowsSystemTintColors;
    char _allowsCustomTintColors;
    char _supportsMultipleAppearancesForEffects;
}

@property (nonatomic) unsigned long long defaultBlendMode;
@property (nonatomic) char allowsVibrancy;
@property (nonatomic) char supportsWhitePointAdjustments;
@property (nonatomic) char supportsBrightnessAdjustments;
@property (nonatomic) char allowsSystemTintColors;
@property (nonatomic) char allowsCustomTintColors;
@property (nonatomic) char supportsMultipleAppearancesForEffects;

- (id)dictionaryForArchiving;

@end
