@class WDText;

@interface WDBlock : NSObject {
    WDText *mText;
}

- (BOOL)isEmpty;
- (id)document;
- (id)initWithText:(id)a0;
- (id)init;
- (id)text;
- (id)description;
- (void)clearProperties;
- (int)blockType;
- (id)newRunIterator;
- (id)runIterator;
- (int)textType;

@end
