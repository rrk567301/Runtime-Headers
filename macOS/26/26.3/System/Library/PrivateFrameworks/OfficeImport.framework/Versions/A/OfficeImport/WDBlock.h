@class WDText;

@interface WDBlock : NSObject {
    WDText *mText;
}

- (id)initWithText:(id)a0;
- (BOOL)isEmpty;
- (id)description;
- (id)init;
- (id)document;
- (id)text;
- (void)clearProperties;
- (int)blockType;
- (id)newRunIterator;
- (id)runIterator;
- (int)textType;

@end
