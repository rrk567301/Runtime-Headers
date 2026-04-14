@interface MUInfoCardStyle : NSObject

@property (class, nonatomic) long long sectionHeaderStyle;

+ (id)sectionHeaderTextColor;
+ (id)cardBackgroundColor;
+ (id)textColor;
+ (id)tokenBackgroundColor;
+ (id)tintColor;
+ (id)secondaryTextColor;
+ (void)setTintColorProvider:(id /* block */)a0;
+ (void)setInfoCardContainerStyle:(long long)a0;
+ (BOOL)_wantsSystemGroupedBackground;
+ (id)actionRowTintColor;
+ (id)attributionTintColor;
+ (id)buttonCellTextColor;
+ (long long)containerStyle;
+ (id)directionsButtonTintColor;
+ (BOOL)hasExternallyProvidedTintColor;
+ (id)imageTileBackgroundColor;
+ (BOOL)isDeveloperPlaceCard;
+ (id)labelForProminence:(long long)a0;
+ (long long)platterStyle;
+ (id)punchoutButtonPlatterColor;
+ (id)rowSelectedColor;
+ (id)rowUnselectedColor;
+ (void)setIsDeveloperPlaceCard:(BOOL)a0;
+ (id)verifiedLogoBackgroundColor;
+ (id)vibrantLabelForProminence:(long long)a0;

@end
