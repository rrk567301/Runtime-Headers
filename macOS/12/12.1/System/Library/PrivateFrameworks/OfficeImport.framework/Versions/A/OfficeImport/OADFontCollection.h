@class NSMutableDictionary;

@interface OADFontCollection : OADBaseFontCollection {
    NSMutableDictionary *_scriptToFontMap;
}

- (id)description;
- (id)init;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)scripts;
- (id)fontForScript:(id)a0;
- (void)setFont:(id)a0 forScript:(id)a1;
- (BOOL)isEqualToFontCollection:(id)a0;

@end
