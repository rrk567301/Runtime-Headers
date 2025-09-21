@class NSIndexSet;

@interface ICCalculateDocumentController : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_scanner;
    void /* unknown type, empty encoding */ $__lazy_storage_$_highlighter;
    void /* unknown type, empty encoding */ currentTextStorageHash;
    void /* unknown type, empty encoding */ updatingExpressions;
    void /* unknown type, empty encoding */ needsDocumentUpdate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_updateDelayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_highPriorityDelayer;
    void /* unknown type, empty encoding */ nextUpdateAffectsChangeCounts;
    void /* unknown type, empty encoding */ $__lazy_storage_$_numberFormatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_documentOptions;
    void /* unknown type, empty encoding */ updating;
    void /* unknown type, empty encoding */ currentScanRequest;
    void /* unknown type, empty encoding */ previewedExpressionString;
    void /* unknown type, empty encoding */ paperKitDocuments;
    void /* unknown type, empty encoding */ isMathPaperSolvingAllowedObservation;
    void /* unknown type, empty encoding */ isKeyboardMathSolvingAllowedObservation;
    void /* unknown type, empty encoding */ _isCalculateMathEnabled;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ note;
@property (nonatomic, readonly) char isUpdating;
@property (nonatomic, readonly) char hasExpressions;
@property (nonatomic, readonly) NSIndexSet *expressionsIndexSet;
@property (nonatomic) void /* unknown type, empty encoding */ isExpressionFormattingEnabled;
@property (nonatomic, readonly) char isCalculateMathEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)cancelUpdate;
- (id)initWithNote:(id)a0;
- (void)performUpdate;
- (char)updateHighlights;
- (void)formatExpressionsInAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 textStorageOffset:(long long)a2 skipStaleExpressions:(char)a3;
- (void)resetHighlights;
- (id)errorFailureReasonForResultAttachment:(id)a0;
- (id)errorFullStringForResultAttachment:(id)a0;
- (id)errorNameForResultAttachment:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })expressionRangeForResultAttachment:(id)a0;
- (id)expressionStringForResultAttachment:(id)a0;
- (void)noteDidChangeCalculatePreviewBehavior:(id)a0;
- (void)noteDidPerformMerge:(id)a0;
- (id)numberLiteralAtLocation:(long long)a0;
- (void)scheduleUpdateAffectingChangeCounts:(char)a0 isHighPriority:(char)a1;
- (void)textStorageDidProcessEndEditing:(id)a0;
- (void)undoManagerDidRedo:(id)a0;
- (void)undoManagerDidUndo:(id)a0;
- (char)updateAffectingChangeCounts:(char)a0;
- (void)updateAffectingChangeCounts:(char)a0 completion:(id /* block */)a1;

@end
