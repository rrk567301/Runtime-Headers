@class SFAppColor;

@interface SearchUIAppColorGenerator : SearchUIColorGenerator

@property (retain, nonatomic) SFAppColor *sfColor;

- (int)defaultTintStyle;
- (void)generateUIColorsIsDark:(char)a0 completionHandler:(id /* block */)a1;

@end
