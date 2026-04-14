@interface MUInfoCardStyle : NSObject

+ (id)textColor;
+ (id)tintColor;
+ (id)tokenBackgroundColor;
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
+ (id)labelForProminence:(long long)a0;
+ (long long)platterStyle;
+ (id)punchoutButtonPlatterColor;
+ (id)rowSelectedColor;
+ (id)rowUnselectedColor;
+ (id)verifiedLogoBackgroundColor;

@end
