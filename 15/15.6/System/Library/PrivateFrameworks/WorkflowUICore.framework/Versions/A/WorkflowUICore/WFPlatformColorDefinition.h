@interface WFPlatformColorDefinition : NSObject

@property (readonly, nonatomic) char isDarkMode;
@property (readonly, nonatomic) char isHighContrast;
@property (readonly, nonatomic) double red;
@property (readonly, nonatomic) double green;
@property (readonly, nonatomic) double blue;
@property (readonly, nonatomic) double alpha;

- (id)initWithDarkMode:(char)a0 highContrast:(char)a1 red:(double)a2 green:(double)a3 blue:(double)a4 alpha:(double)a5;

@end
