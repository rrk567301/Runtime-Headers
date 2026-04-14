@interface WDSpecialCharacter : WDRunWithCharacterProperties {
    int mType;
}

- (id)description;
- (int)runType;
- (id)initWithParagraph:(id)a0;
- (int)characterType;
- (void)setCharacterType:(int)a0;

@end
