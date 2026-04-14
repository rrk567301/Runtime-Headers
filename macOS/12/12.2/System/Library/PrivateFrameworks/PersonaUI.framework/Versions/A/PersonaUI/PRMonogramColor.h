@class NSArray, NSBundle, NSString, NSColor;

@interface PRMonogramColor : NSObject

@property (class, readonly, nonatomic) NSArray *availableColorNames;
@property (class, readonly, nonatomic) NSArray *availableColors;

@property (retain, nonatomic) NSColor *color;
@property (retain, nonatomic) NSColor *gradientStartColor;
@property (retain, nonatomic) NSColor *gradientEndColor;
@property (retain, nonatomic) NSColor *selectedActiveColor;
@property (retain, nonatomic) NSColor *selectedInactiveColor;
@property (retain, nonatomic) NSColor *selectedActiveTextColor;
@property (retain, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) NSString *colorName;

+ (id)defaultGradientStartColor;
+ (id)defaultGradientEndColor;
+ (id)defaultSelectedActiveColor;
+ (id)defaultSelectedInactiveColor;
+ (id)defaultSelectedActiveTextColor;
+ (id)gradientStartName:(id)a0;
+ (id)gradientEndName:(id)a0;
+ (id)gradientStartColor:(id)a0;
+ (id)generateMonogramGradientColorsByNameDictionary;
+ (id)monogramGradientColorNamed:(id)a0;
+ (id)defaultBundle;
+ (id)colorWithName:(id)a0 inBundle:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)setColorName:(id)a0;
- (id)initWithColorName:(id)a0;
- (id)initWithColorName:(id)a0 inBundle:(id)a1;
- (id)initWithRandomColor;

@end
