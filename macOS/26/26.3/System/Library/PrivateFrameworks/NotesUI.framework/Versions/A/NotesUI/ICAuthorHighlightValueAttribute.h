@class NSColor;

@interface ICAuthorHighlightValueAttribute : NSObject <NSCopying>

@property (nonatomic) double value;
@property (copy, nonatomic) NSColor *color;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
