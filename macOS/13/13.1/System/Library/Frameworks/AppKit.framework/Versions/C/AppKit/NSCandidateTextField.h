@class NSColor;

@interface NSCandidateTextField : NSTextField {
    NSColor *_candidateColor;
}

@property BOOL trimOnLeft;
@property BOOL trimOnRight;

+ (Class)cellClass;

- (void)dealloc;
- (void)setSelected:(BOOL)a0;
- (void)setAttributedCorrection:(id)a0;

@end
