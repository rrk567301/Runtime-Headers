@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {
    int _shouldRespectOutputBlending;
}

@property (copy) NSString *backgroundType;
@property (nonatomic) BOOL effectShowsValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSelectionType:(long long)a0;
- (id)init;
- (id)description;
- (BOOL)shouldIgnoreForegroundColor;
- (void)setShouldRespectOutputBlending:(BOOL)a0;
- (void)dealloc;
- (BOOL)shouldRespectOutputBlending;

@end
