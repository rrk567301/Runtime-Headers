@class NSMutableDictionary;

@interface OADFontCollection : OADBaseFontCollection {
    NSMutableDictionary *_scriptToFontMap;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)isEmpty;
- (id)scripts;
- (id)fontForScript:(id)a0;
- (char)isEqualToFontCollection:(id)a0;
- (void)setFont:(id)a0 forScript:(id)a1;

@end
