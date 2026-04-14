@interface MUInfoCardStyle : NSObject

+ (id)textColor;
+ (id)tintColor;
+ (id)tokenBackgroundColor;
+ (void)setTintColorProvider:(id /* block */)a0;
+ (id)cardBackgroundColor;
+ (id)secondaryTextColor;
+ (void)setInfoCardContainerStyle:(long long)a0;
+ (id)buttonCellTextColor;
+ (id)attributionTintColor;
+ (id)punchoutButtonPlatterColor;
+ (id)rowUnselectedColor;
+ (id)rowSelectedColor;
+ (id)actionRowTintColor;
+ (id)imageTileBackgroundColor;
+ (id)verifiedLogoBackgroundColor;
+ (id)directionsButtonTintColor;
+ (long long)containerStyle;
+ (long long)platterStyle;
+ (id)labelForProminence:(long long)a0;
+ (BOOL)hasExternallyProvidedTintColor;

@end
