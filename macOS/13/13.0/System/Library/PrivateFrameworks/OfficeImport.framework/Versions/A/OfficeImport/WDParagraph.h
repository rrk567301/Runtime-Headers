@class NSMutableArray, WDParagraphProperties;

@interface WDParagraph : WDBlock {
    WDParagraphProperties *mProperties;
    NSMutableArray *mRuns;
}

@property unsigned long long identifier;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)clearProperties;
- (id)properties;
- (id)initWithText:(id)a0;
- (id)addAnnotation:(int)a0;
- (int)blockType;
- (id)runs;
- (id)initWithText:(id)a0 string:(id)a1;
- (unsigned long long)runCount;
- (id)runAt:(unsigned long long)a0;
- (void)addRun:(id)a0;
- (void)insertRun:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeRun:(id)a0;
- (void)clearRuns;
- (id)addCharacterRun;
- (id)addAnnotation:(int)a0 atIndex:(unsigned long long)a1;
- (id)addFootnote;
- (id)addEndnote;
- (id)addFieldMarker;
- (id)addFieldMarker:(int)a0;
- (id)addHyperlinkFieldMarker;
- (id)addHyperlinkFieldMarker:(int)a0;
- (id)addSymbol;
- (id)addSpecialCharacter;
- (id)addBookmark;
- (id)addBookmark:(id)a0 type:(int)a1;
- (id)addDateTime:(id)a0;
- (id)addMath:(id)a0;
- (float)maxReflectionDistance;
- (void)removeLastCharacter:(unsigned short)a0;
- (id)runIterator;
- (id)newRunIterator;
- (BOOL)isTextFrame;
- (BOOL)isContinuationOf:(id)a0;

@end
