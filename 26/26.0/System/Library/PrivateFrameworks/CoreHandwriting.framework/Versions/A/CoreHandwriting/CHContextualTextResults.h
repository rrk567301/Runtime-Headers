@class NSArray;

@interface CHContextualTextResults : NSObject

@property (retain, nonatomic) NSArray *textResults;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void).cxx_destruct;
- (id)rawTranscription;
- (void)enumerateGroupsCoveredByStringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 block:(id /* block */)a1;
- (id)initWithTextResults:(id)a0;
- (BOOL)isMathForContextLookup;
- (id)majorityScriptId;
- (id)textResultToIndexMappingFromTopTranscriptionWithCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 intersectionRanges:(id *)a1;
- (id)tokenSupportRangesForNonTextStrokes:(id)a0 initialStrokes:(id)a1 strokeProvider:(id)a2 shouldExtractFromRefinablePath:(BOOL)a3;
- (id)topTranscription;

@end
