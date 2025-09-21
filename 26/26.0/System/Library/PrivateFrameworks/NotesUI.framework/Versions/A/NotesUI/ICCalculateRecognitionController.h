@interface ICCalculateRecognitionController : NSObject {
    void /* unknown type, empty encoding */ didTriggerResultPreviewAfterUnmarkingText;
    void /* unknown type, empty encoding */ previewedExpression;
    void /* unknown type, empty encoding */ isUpdatingMarkedTextExpressions;
    void /* unknown type, empty encoding */ isMathPaperSolvingAllowedObservation;
    void /* unknown type, empty encoding */ isKeyboardMathSolvingAllowedObservation;
}

@property (nonatomic, weak) void /* function */ note;
@property (nonatomic, weak) void /* function */ textView;
@property (nonatomic, weak) void /* function */ attachmentInsertionController;
@property (nonatomic, weak) void /* function */ suggestionsDelegate;
@property (nonatomic) BOOL insertsResults;
@property (nonatomic) long long previewBehavior;
@property (nonatomic, readonly) BOOL isPreviewingResult;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNote:(id)a0;
- (void)commitPreviewedResultAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 asLiteral:(BOOL)a1;
- (void)didInsertString:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)didUnmarkString:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)discardPreviewedResult;
- (void)insertLiteralResultAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)insertResultAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)previewResultAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)willUpdateMarkedText:(id)a0;

@end
