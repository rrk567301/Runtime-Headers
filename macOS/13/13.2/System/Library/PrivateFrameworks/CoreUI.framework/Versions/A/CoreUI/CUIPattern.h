@interface CUIPattern : NSObject {
    struct CGImage { } *_patternImage;
    struct CGPattern { } *_pattern;
}

@property (nonatomic) double alpha;

- (void)dealloc;
- (id)description;
- (struct CGPattern { } *)pattern;
- (id)initWithImageRef:(struct CGImage { } *)a0;
- (struct CGPattern { } *)_newPattern;
- (void)setPatternInContext:(struct CGContext { } *)a0;
- (struct CGImage { } *)patternImageRef;

@end
