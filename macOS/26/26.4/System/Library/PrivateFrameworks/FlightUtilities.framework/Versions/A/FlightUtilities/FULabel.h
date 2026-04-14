@class NSString, NSAttributedString, NSFont;

@interface FULabel : NSTextField {
    NSString *_stringValue;
    NSAttributedString *_attributedStringValue;
    NSFont *_downscaleFont;
    NSFont *_originalFont;
}

@property (copy) id /* block */ onTap;
@property (readonly, nonatomic) BOOL uppercase;
@property (readonly) BOOL useCurrentLocale;
@property unsigned long long maxCharactersDownscale;

- (void)mouseUp:(id)a0;
- (void)setAttributedText:(id)a0;
- (void)_updateFontForStringLength:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setStyleProvider:(id)a0 primaryStyle:(BOOL)a1;
- (void)mouseDown:(id)a0;
- (id)attributedText;
- (id)_downscaleFont;
- (id)text;
- (void)setUppercase:(BOOL)a0 usingCurrentLocale:(BOOL)a1;
- (void)setText:(id)a0;
- (id)_originalFont;

@end
