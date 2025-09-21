@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {
    int _shouldRespectOutputBlending;
}

@property (copy) NSString *backgroundType;
@property (nonatomic) BOOL effectShowsValue;

- (void)setSelectionType:(long long)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (BOOL)shouldIgnoreForegroundColor;
- (BOOL)shouldRespectOutputBlending;
- (void)setShouldRespectOutputBlending:(BOOL)a0;

@end
