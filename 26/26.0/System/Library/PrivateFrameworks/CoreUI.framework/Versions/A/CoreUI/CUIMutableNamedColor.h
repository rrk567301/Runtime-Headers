@class NSString;

@interface CUIMutableNamedColor : CUINamedColor {
    NSString *_appearance;
}

- (void)dealloc;
- (void)setCGColor:(struct CGColor { } *)a0;
- (void)setAppearance:(id)a0;
- (id)init;
- (id)description;
- (id)appearance;

@end
