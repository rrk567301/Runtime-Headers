@class NSMutableArray, WDParagraphProperties;

@interface WDParagraph : WDBlock {
    WDParagraphProperties *mProperties;
    NSMutableArray *mRuns;
}

@property unsigned long long identifier;

- (id)description;
- (void).cxx_destruct;
- (char)isEmpty;
- (void)clearProperties;
- (id)properties;
- (id)addAnnotation:(int)a0;
- (id)initWithText:(id)a0;
- (int)blockType;
- (id)addFieldMarker:(int)a0;
- (id)addCharacterRun;
- (void)addRun:(id)a0;
- (id)addAnnotation:(int)a0 atIndex:(unsigned long long)a1;
- (id)addBookmark;
- (id)addBookmark:(id)a0 type:(int)a1;
- (id)addDateTime:(id)a0;
- (id)addEndnote;
- (id)addFieldMarker;
- (id)addFootnote;
- (id)addHyperlinkFieldMarker;
- (id)addHyperlinkFieldMarker:(int)a0;
- (id)addMath:(id)a0;
- (id)addSpecialCharacter;
- (id)addSymbol;
- (void)clearRuns;
- (id)initWithText:(id)a0 string:(id)a1;
- (void)insertRun:(id)a0 atIndex:(unsigned long long)a1;
- (char)isContinuationOf:(id)a0;
- (char)isTextFrame;
- (float)maxReflectionDistance;
- (id)newRunIterator;
- (void)removeLastCharacter:(unsigned short)a0;
- (void)removeRun:(id)a0;
- (id)runAt:(unsigned long long)a0;
- (unsigned long long)runCount;
- (id)runIterator;
- (id)runs;

@end
