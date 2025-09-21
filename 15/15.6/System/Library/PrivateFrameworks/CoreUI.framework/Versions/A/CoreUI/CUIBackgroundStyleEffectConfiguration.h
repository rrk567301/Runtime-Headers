@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {
    int _shouldRespectOutputBlending;
}

@property (copy, nonatomic) NSString *backgroundType;
@property (nonatomic) char effectShowsValue;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)setShouldRespectOutputBlending:(char)a0;
- (void)setSelectionType:(long long)a0;
- (char)shouldIgnoreForegroundColor;
- (char)shouldRespectOutputBlending;

@end
