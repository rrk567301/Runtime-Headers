@class TPPaginatedPageController, TPDocumentRoot;

@interface TPFootnoteLayoutController : NSObject {
    TPDocumentRoot *_documentRoot;
    char _bumpedDocumentEndnotesForPageBreak;
}

@property (readonly, weak, nonatomic) TPPaginatedPageController *footnoteMarkProvider;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })endnoteRangeForSectionCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 isLastSection:(char)a1 sectionHint:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })footnoteLayoutRangeForPageCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)inflateFootnotesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 intoFootnoteContainer:(id)a1;
- (id)initWithPaginatedPageController:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })layOutFootnotesFromIndex:(unsigned long long)a0 intoFootnoteContainer:(id)a1 maxBlockHeight:(double)a2 pageCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 sectionCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 isLastSection:(char)a5 sectionHint:(id)a6 pageHintIndex:(unsigned long long)a7;
- (id)p_footnoteReferenceStoragesInFootnoteIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)p_layoutFootnotesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 intoFootnoteContainer:(id)a1 maxBlockHeight:(double)a2 measure:(char)a3 inflating:(char)a4;
- (id)p_layoutForFootnoteReferenceStorage:(id)a0;
- (void)removeDeletedFootnoteInContainer:(id)a0;

@end
