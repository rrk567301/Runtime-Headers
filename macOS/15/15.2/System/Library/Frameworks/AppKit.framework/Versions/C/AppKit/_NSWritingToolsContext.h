@class NSWritingToolsProofreadingController, NSString, NSWritingToolsProofreadingSuggestion, NSClickGestureRecognizer, NSWritingToolsCoordinatorContext, _NSWritingToolsData;

@interface _NSWritingToolsContext : NSObject <NSGestureRecognizerDelegate> {
    NSWritingToolsProofreadingSuggestion *_gestureRecognizedSuggestion;
    _NSWritingToolsData *_parentData;
    NSWritingToolsCoordinatorContext *_context;
    NSWritingToolsProofreadingController *_proofreadingController;
}

@property (readonly) NSClickGestureRecognizer *_clickGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_mouseClicked:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldAttemptToRecognizeWithEvent:(id)a1;

@end
