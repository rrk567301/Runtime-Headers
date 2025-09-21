@class SFCalendarColor;

@interface SearchUICalendarColorGenerator : SearchUIColorGenerator

@property (retain, nonatomic) SFCalendarColor *sfColor;

- (int)defaultTintStyle;
- (void)generateUIColorsIsDark:(char)a0 completionHandler:(id /* block */)a1;

@end
