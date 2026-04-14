@interface MUInfoCardStyle : NSObject

@property (class, nonatomic) long long sectionHeaderStyle;

+ (id)tokenBackgroundColor;
+ (id)sectionHeaderTextColor;
+ (id)tintColor;
+ (id)textColor;
+ (id)cardBackgroundColor;
+ (id)secondaryTextColor;
+ (void)setTintColorProvider:(id /* block */)a0;
+ (void)setInfoCardContainerStyle:(long long)a0;
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
