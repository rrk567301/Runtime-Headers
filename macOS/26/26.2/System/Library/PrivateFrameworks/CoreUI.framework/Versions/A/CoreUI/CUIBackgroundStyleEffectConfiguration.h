@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {
    int _shouldRespectOutputBlending;
}

@property (copy) NSString *backgroundType;
@property (nonatomic) BOOL effectShowsValue;

- (BOOL)shouldRespectOutputBlending;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setShouldRespectOutputBlending:(BOOL)a0;
- (void)setSelectionType:(long long)a0;
- (id)description;
- (id)init;
- (BOOL)shouldIgnoreForegroundColor;
- (void)dealloc;

@end
