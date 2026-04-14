@class NSString;

@interface _UIFontTextStyleCacheKey : _UIFontCacheKey

@property (copy, nonatomic) NSString *textStyle;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) BOOL textLegibility;

- (unsigned long long)_hash;
- (id)description;
- (BOOL)_isEqualToKey:(id)a0;
- (void)dealloc;

@end
