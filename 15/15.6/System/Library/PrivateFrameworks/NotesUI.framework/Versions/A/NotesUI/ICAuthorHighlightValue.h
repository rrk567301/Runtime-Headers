@class NSNumber, NSColor;

@interface ICAuthorHighlightValue : NSObject

@property (copy, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSColor *color;
@property (nonatomic, getter=isAboveImplicitHighlights) char aboveImplicitHighlights;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
