@class OADParagraph;

@interface PMParagraphMapper : CMMapper {
    OADParagraph *mParagraph;
}

- (void).cxx_destruct;
- (void)addEndCharacterStyleToStyle:(id)a0;
- (id)copyParagraphStyleWithState:(id)a0 isFirstParagraph:(char)a1;
- (int)firstTextRunFontSize;
- (id)fontScheme;
- (id)initWithOadParagraph:(id)a0 parent:(id)a1;
- (void)mapAt:(id)a0 withState:(id)a1 isFirstParagraph:(char)a2;

@end
