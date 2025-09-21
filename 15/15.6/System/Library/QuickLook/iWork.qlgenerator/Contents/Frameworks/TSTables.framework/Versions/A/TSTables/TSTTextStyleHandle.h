@class TSWPParagraphStyle;

@interface TSTTextStyleHandle : NSObject <NSCopying>

@property (readonly, nonatomic) TSWPParagraphStyle *textStyle;
@property (readonly, nonatomic) char isVariation;
@property (readonly, nonatomic) double fontSize;
@property (readonly, nonatomic) char nonDefaultFontSize;
@property (readonly, nonatomic) char nonDefaultFontName;
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) char containsGradientThatFillsContainer;

+ (id)handleForTextStyle:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithTextStyle:(id)a0;

@end
