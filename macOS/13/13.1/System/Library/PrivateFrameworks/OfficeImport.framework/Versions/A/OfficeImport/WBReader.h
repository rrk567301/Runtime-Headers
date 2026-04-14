@class WBOfficeArtReaderState, WDDocument, NSMutableDictionary, NSMutableArray, OITSUNoCopyDictionary;

@interface WBReader : OCBReader {
    void *mFootnoteTable;
    void *mEndnoteTable;
    void *mAnnotationTable;
    void *mTableHeaders;
    void *mBookmarkTable;
    void *mAnnotationBookmarkTable;
    struct WrdFieldPositionTable *mFieldPositionTables[8];
    void *mStoryTable;
    void *mHeaderStoryTable;
    void *mFileShapeAddressTable;
    void *mFileShapeAddressHeaderTable;
    struct WrdEshObjectFactory { void /* function */ **x0; BOOL x1; } *mEshObjectFactory;
    void *mLastRowParagraphProperties;
    NSMutableArray *mAnnotationOwners;
    OITSUNoCopyDictionary *mIndexToStyles;
    OITSUNoCopyDictionary *mIndexToFonts;
    WBOfficeArtReaderState *mOfficeArtState;
    void *mTextBoxes;
    BOOL mReportProgress;
    id mAnnotationRangeStart;
    NSMutableDictionary *mBookmarkIndexToAnnotationRangeStartMap;
}

@property (weak, nonatomic) WDDocument *targetDocument;
@property (readonly) NSMutableDictionary *previousFlowElement;

- (void)dealloc;
- (void)initialize;
- (void).cxx_destruct;
- (BOOL)start;
- (id)fontAtIndex:(int)a0;
- (id)read;
- (id)initWithCancelDelegate:(id)a0;
- (id)drawableForShapeId:(unsigned int)a0;
- (struct WrdEshObjectFactory { void /* function */ **x0; BOOL x1; } *)eshObjectFactory;
- (id)officeArtState;
- (struct OCCEncryptionInfoReader { void /* function */ **x0; } *)encryptionInfoReader;
- (struct OCCBinaryStreamer { void /* function */ **x0; struct OCCCryptoKey *x1; char *x2; } *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey { } *)a0 baseOutputFilenameInUTF8:(const char *)a1;
- (void)setOfficeArtState:(id)a0;
- (void *)wrdReader;
- (void *)footnoteTable;
- (void *)endnoteTable;
- (void *)annotationTable;
- (id)annotationOwner:(int)a0;
- (void *)tableHeaders;
- (void *)bookmarkTable;
- (void *)annotationBookmarkTable;
- (void *)fieldPositionTableForTextType:(int)a0;
- (id)readCharactersForTextRun:(struct WrdTextRun { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; } *)a0;
- (id)readCharactersFrom:(unsigned int)a0 to:(unsigned int)a1 textType:(int)a2;
- (void *)storyTable;
- (void *)headerStoryTable;
- (void *)fileShapeAddressTable;
- (void *)fileShapeAddressHeaderTable;
- (void *)lastRowParagraphProperties;
- (void)setLastRowParagraphProperties:(void *)a0;
- (id)styleAtIndex:(int)a0;
- (id)styleAtIndex:(int)a0 expectedType:(int)a1;
- (void)addStyle:(id)a0 index:(int)a1;
- (void)addFont:(id)a0 index:(int)a1;
- (BOOL)reportProgress;
- (void)setReportProgress:(BOOL)a0;
- (void)cacheTextBox:(id)a0 withChainIndex:(unsigned short)a1;
- (unsigned long long)textBoxCount;
- (struct WBTextBoxReaderInfo { id x0; unsigned short x1; })textBoxInfoAtIndex:(unsigned long long)a0;
- (id)annotationRangeStart;
- (void)setAnnotationRangeStart:(id)a0;
- (id)annotationRangeStartForBookmarkIndex:(unsigned long long)a0;
- (void)setAnnotationRangeStart:(id)a0 forBookmarkIndex:(unsigned long long)a1;

@end
