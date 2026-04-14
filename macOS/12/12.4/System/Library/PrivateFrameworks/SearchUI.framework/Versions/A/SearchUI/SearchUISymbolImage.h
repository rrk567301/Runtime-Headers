@class NSString, NSFont;

@interface SearchUISymbolImage : SearchUIImage

@property (retain) NSString *symbolName;
@property (retain) NSFont *symbolFont;
@property long long symbolScale;
@property double symbolWeight;
@property BOOL punchThroughBackground;
@property int backgroundColor;
@property int primaryColor;
@property int secondaryColor;

+ (id)uiImageWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2;
+ (id)chevronImage;
+ (id)uiImageWithSymbolName:(id)a0;
+ (id)uiImageWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2 weight:(double)a3 isTemplate:(BOOL)a4 primaryColor:(int)a5 secondaryColor:(int)a6 appearance:(id)a7;
+ (id)uiImageWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2 weight:(double)a3 isTemplate:(BOOL)a4;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (double)aspectRatio;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (id)initWithSFImage:(id)a0;
- (id)initWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2;
- (int)defaultCornerRoundingStyle;
- (id)initWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2 weight:(double)a3;
- (BOOL)drawsOnBackground;
- (id)initWithSymbolName:(id)a0;

@end
