@interface MUInfoCardStyle : NSObject

@property (class, nonatomic) long long sectionHeaderStyle;

+ (id)textColor;
+ (id)tintColor;
+ (id)tokenBackgroundColor;
+ (id)cardBackgroundColor;
+ (id)secondaryTextColor;
+ (void)setTintColorProvider:(id /* block */)a0;
+ (void)setInfoCardContainerStyle:(long long)a0;
+ (id)sectionHeaderTextColor;
+ (id)actionRowTintColor;
+ (id)attributionTintColor;
+ (id)buttonCellTextColor;
+ (long long)containerStyle;
+ (id)directionsButtonTintColor;
+ (char)hasExternallyProvidedTintColor;
+ (id)imageTileBackgroundColor;
+ (char)isDeveloperPlaceCard;
+ (id)labelForProminence:(long long)a0;
+ (long long)platterStyle;
+ (id)punchoutButtonPlatterColor;
+ (id)rowSelectedColor;
+ (id)rowUnselectedColor;
+ (void)setIsDeveloperPlaceCard:(char)a0;
+ (id)verifiedLogoBackgroundColor;

@end
