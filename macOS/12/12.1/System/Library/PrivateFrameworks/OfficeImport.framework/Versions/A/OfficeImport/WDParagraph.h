@class NSMutableArray, WDParagraphProperties;

@interface WDParagraph : WDBlock {
    WDParagraphProperties *mProperties;
    NSMutableArray *mRuns;
}

@property unsigned long long identifier;

- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)clearProperties;
- (id)properties;
- (id)addAnnotation:(int)a0;
- (id)initWithText:(id)a0;
- (int)blockType;
- (id)runs;
- (id)addBookmark:(id)a0 type:(int)a1;
- (unsigned long long)runCount;
- (id)runAt:(unsigned long long)a0;
- (void)removeLastCharacter:(unsigned short)a0;
- (id)addCharacterRun;
- (void)addRun:(id)a0;
- (id)addSpecialCharacter;
- (id)addSymbol;
- (id)addFootnote;
- (id)addEndnote;
- (id)addFieldMarker;
- (id)addAnnotation:(int)a0 atIndex:(unsigned long long)a1;
- (id)addHyperlinkFieldMarker;
- (id)initWithText:(id)a0 string:(id)a1;
- (void)insertRun:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeRun:(id)a0;
- (void)clearRuns;
- (id)addDateTime:(id)a0;
- (id)addMath:(id)a0;
- (float)maxReflectionDistance;
- (id)runIterator;
- (id)newRunIterator;
- (id)addBookmark;
- (id)addFieldMarker:(int)a0;
- (id)addHyperlinkFieldMarker:(int)a0;
- (BOOL)isTextFrame;
- (BOOL)isContinuationOf:(id)a0;

@end
