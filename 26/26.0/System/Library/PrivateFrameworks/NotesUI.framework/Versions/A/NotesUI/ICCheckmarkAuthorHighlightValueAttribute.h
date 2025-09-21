@class NSColor;

@interface ICCheckmarkAuthorHighlightValueAttribute : NSObject <NSCopying>

@property (nonatomic) double foregroundAlpha;
@property (copy, nonatomic) NSColor *highlightColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
