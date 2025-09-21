@class NSString, NSColor, NSFont;

@interface SearchUISymbolImage : SearchUIImage

@property (retain) NSString *symbolName;
@property (retain) NSFont *symbolFont;
@property double symbolWeight;
@property char punchThroughBackground;
@property int backgroundColor;
@property int primaryColor;
@property int secondaryColor;
@property int specifiedFillStyle;
@property long long preferredFill;
@property long long symbolScale;
@property double preferredSymbolFontSize;
@property (retain, nonatomic) NSColor *customForegroundColor;
@property (retain, nonatomic) NSColor *customBackgroundColor;

+ (id)chevronImage;
+ (id)uiImageWithSymbolName:(id)a0;
+ (id)uiImageWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2;
+ (id)uiImageWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2 weight:(double)a3 isTemplate:(char)a4;
+ (id)uiImageWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2 weight:(double)a3 isTemplate:(char)a4 platformPrimaryColor:(id)a5 platformSecondaryColor:(id)a6 appearance:(id)a7 preferredFill:(long long)a8;
+ (id)uiImageWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2 weight:(double)a3 isTemplate:(char)a4 primaryColor:(int)a5 secondaryColor:(int)a6 appearance:(id)a7;
+ (id)uiImageWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2 weight:(double)a3 isTemplate:(char)a4 primaryColor:(int)a5 secondaryColor:(int)a6 appearance:(id)a7 preferredFill:(long long)a8;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (double)aspectRatio;
- (id)initWithSymbolName:(id)a0;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(char)a1 completionHandler:(id /* block */)a2;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(char)a1;
- (int)defaultCornerRoundingStyle;
- (char)drawsOnBackground;
- (id)initWithSFImage:(id)a0;
- (id)initWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2;
- (id)initWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2 weight:(double)a3;

@end
