@class NSMutableArray, WDParagraphProperties;

@interface WDParagraph : WDBlock {
    WDParagraphProperties *mProperties;
    NSMutableArray *mRuns;
}

@property unsigned long long identifier;

- (BOOL)isEmpty;
- (id)properties;
- (id)description;
- (id)initWithText:(id)a0;
- (void).cxx_destruct;
- (void)clearProperties;
- (id)addAnnotation:(int)a0;
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
- (BOOL)isContinuationOf:(id)a0;
- (BOOL)isTextFrame;
- (float)maxReflectionDistance;
- (id)newRunIterator;
- (void)removeLastCharacter:(unsigned short)a0;
- (void)removeRun:(id)a0;
- (id)runAt:(unsigned long long)a0;
- (unsigned long long)runCount;
- (id)runIterator;
- (id)runs;

@end
