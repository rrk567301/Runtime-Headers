@class WDText;

@interface WDBlock : NSObject {
    WDText *mText;
}

- (id)document;
- (id)text;
- (id)initWithText:(id)a0;
- (id)description;
- (BOOL)isEmpty;
- (id)init;
- (void)clearProperties;
- (int)blockType;
- (id)newRunIterator;
- (id)runIterator;
- (int)textType;

@end
