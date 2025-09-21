@class NSString;

@interface CSOCRTextLine : NSObject {
    NSString *_strings[3];
    double _scores[3];
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _textBounds;
    long long _count;
    char _isTitle;
}

- (id)description;
- (void).cxx_destruct;
- (char)isTitle;
- (void)appendToString:(id)a0;
- (void)addCandidate:(id)a0 confidence:(double)a1;
- (double)candidateConfidenceAtIndex:(int)a0;
- (long long)candidateCount;
- (id)candidateTextAtIndex:(int)a0;
- (id)initWithTextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTitle:(char)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textBounds;

@end
