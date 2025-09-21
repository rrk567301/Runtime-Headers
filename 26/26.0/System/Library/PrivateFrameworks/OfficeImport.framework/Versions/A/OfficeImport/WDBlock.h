@class WDText;

@interface WDBlock : NSObject {
    WDText *mText;
}

- (BOOL)isEmpty;
- (id)init;
- (id)text;
- (id)description;
- (id)document;
- (id)initWithText:(id)a0;
- (void)clearProperties;
- (int)blockType;
- (id)newRunIterator;
- (id)runIterator;
- (int)textType;

@end
