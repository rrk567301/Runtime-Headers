@class NSColor;

@interface ICCheckmarkAuthorHighlightValueAttribute : NSObject <NSCopying>

@property (nonatomic) double foregroundAlpha;
@property (copy, nonatomic) NSColor *highlightColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;

@end
