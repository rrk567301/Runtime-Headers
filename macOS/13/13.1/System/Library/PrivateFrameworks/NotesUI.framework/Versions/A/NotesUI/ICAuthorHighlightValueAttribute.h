@class NSColor;

@interface ICAuthorHighlightValueAttribute : NSObject <NSCopying>

@property (nonatomic) double value;
@property (copy, nonatomic) NSColor *color;
@property (nonatomic, getter=isAboveImplicitHighlights) BOOL aboveImplicitHighlights;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
