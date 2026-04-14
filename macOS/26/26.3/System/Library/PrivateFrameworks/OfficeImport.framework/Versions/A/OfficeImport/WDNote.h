@class WDText, WDCharacterRun;

@interface WDNote : WDRun {
    WDText *mText;
    WDCharacterRun *mReference;
    BOOL mAutomaticNumbering;
}

- (id)reference;
- (id)description;
- (id)text;
- (void).cxx_destruct;
- (int)runType;
- (BOOL)automaticNumbering;
- (id)initWithParagraph:(id)a0 footnote:(BOOL)a1;
- (void)setAutomaticNumbering:(BOOL)a0;

@end
