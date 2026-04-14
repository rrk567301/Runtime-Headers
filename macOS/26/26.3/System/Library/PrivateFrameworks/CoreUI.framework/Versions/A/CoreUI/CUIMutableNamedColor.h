@class NSString;

@interface CUIMutableNamedColor : CUINamedColor {
    NSString *_appearance;
}

- (void)setAppearance:(id)a0;
- (id)appearance;
- (id)description;
- (id)init;
- (void)setCGColor:(struct CGColor { } *)a0;
- (void)dealloc;

@end
