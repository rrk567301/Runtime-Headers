@class WDDocument, NSMutableArray, WDTableCell;

@interface WDText : NSObject {
    NSMutableArray *mBlocks;
    int mTextType;
}

@property (readonly, weak) WDDocument *document;
@property (readonly, weak) WDTableCell *tableCell;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)content;
- (id)paragraphs;
- (id)blocks;
- (void)addBlock:(id)a0;
- (id)addParagraph;
- (void)removeLastCharacter:(unsigned short)a0;
- (id)runIterator;
- (id)newRunIterator;
- (id)initWithDocument:(id)a0 textType:(int)a1;
- (id)initWithDocument:(id)a0 textType:(int)a1 tableCell:(id)a2;
- (unsigned long long)blockCount;
- (id)blockAt:(unsigned long long)a0;
- (id)lastBlock;
- (unsigned long long)indexOfBlock:(id)a0;
- (id)addParagraphAtIndex:(int)a0;
- (id)firstParagraph;
- (id)addTable;
- (id)addTableAtIndex:(int)a0;
- (void)removeLastBlock;
- (int)tableNestingLevel;
- (id)blockIterator;
- (id)newBlockIterator;
- (int)textType;

@end
