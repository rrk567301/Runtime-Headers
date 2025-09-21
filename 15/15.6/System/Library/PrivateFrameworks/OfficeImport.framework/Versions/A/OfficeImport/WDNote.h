@class WDText, WDCharacterRun;

@interface WDNote : WDRun {
    WDText *mText;
    WDCharacterRun *mReference;
    char mAutomaticNumbering;
}

- (id)description;
- (void).cxx_destruct;
- (id)text;
- (id)reference;
- (int)runType;
- (char)automaticNumbering;
- (id)initWithParagraph:(id)a0 footnote:(char)a1;
- (void)setAutomaticNumbering:(char)a0;

@end
