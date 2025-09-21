@class NSString;

@interface _UIFontTextStyleCacheKey : _UIFontCacheKey

@property (copy, nonatomic) NSString *textStyle;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) char textLegibility;

- (void)dealloc;
- (id)description;
- (unsigned long long)_hash;
- (char)_isEqualToKey:(id)a0;

@end
