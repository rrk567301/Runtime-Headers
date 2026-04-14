@class NSObject;
@protocol UINSWritingToolsBridgeDelegate;

@interface UINSWritingToolsBridge : NSObject <NSTextInputClient, WTWritingToolsDelegate_Proposed_v3> {
    NSObject<UINSWritingToolsBridgeDelegate> *_delegate;
}

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unionRectInVisibleSelectedRange;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } documentVisibleRect;
@property (readonly) BOOL supportsAdaptiveImageGlyph;
@property (nonatomic) BOOL wantsWritingToolsInlineEditing;

- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)attributedSubstringForProposedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 actualRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (unsigned long long)characterIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)compositionSession:(id)a0 didReceiveText:(id)a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inContext:(id)a3 finished:(BOOL)a4;
- (void)didBeginWritingToolsSession:(id)a0 contexts:(id)a1;
- (void)didEndWritingToolsSession:(id)a0 accepted:(BOOL)a1;
- (void)doCommandBySelector:(SEL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 actualRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)hasMarkedText;
- (void)insertText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })markedRange;
- (void)proofreadingSession:(id)a0 didReceiveSuggestions:(id)a1 processedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inContext:(id)a3 finished:(BOOL)a4;
- (void)proofreadingSession:(id)a0 didUpdateState:(long long)a1 forSuggestionWithUUID:(id)a2 inContext:(id)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)unmarkText;
- (id)validAttributesForMarkedText;
- (void)willBeginWritingToolsSession:(id)a0 requestContexts:(id /* block */)a1;
- (long long)writingToolsBehavior;
- (void)writingToolsSession:(id)a0 didReceiveAction:(long long)a1;

@end
