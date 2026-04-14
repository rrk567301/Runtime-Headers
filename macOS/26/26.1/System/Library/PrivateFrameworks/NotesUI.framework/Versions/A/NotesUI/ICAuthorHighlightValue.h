@class NSNumber, NSColor;

@interface ICAuthorHighlightValue : NSObject

@property (copy, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSColor *color;
@property (nonatomic, getter=isAboveImplicitHighlights) BOOL aboveImplicitHighlights;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
