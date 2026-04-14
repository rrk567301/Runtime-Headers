@class NSView, NSAttributedString, NSValue, NSMutableDictionary, WTSession, NSWritingToolsContextState, NSMutableArray, NSWritingToolsProofreadingController;

@interface _NSTextViewWritingToolsData : NSObject

@property (retain, nonatomic) NSWritingToolsContextState *contextState;
@property (retain, nonatomic) NSWritingToolsProofreadingController *proofreadingController;
@property (nonatomic) BOOL inWritingToolsDelegate;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } initialPonderingRange;
@property (retain, nonatomic) WTSession *wtSession;
@property (nonatomic) BOOL forceAcceptSuggestion;
@property (retain, nonatomic) NSMutableDictionary *rewrittenStateForSuggestionUUIDs;
@property (retain, nonatomic) NSView *underlinesView;
@property (retain, nonatomic) NSMutableArray *textAnimationContexts;
@property (nonatomic) BOOL isCompositionSession;
@property (retain, nonatomic) NSValue *lastDeliveredPendingCompositionRange;
@property (copy, nonatomic) NSAttributedString *lastDeliveredPendingCompositionString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } initialSelectionRange;
@property (nonatomic) BOOL sessionFinished;
@property (nonatomic, getter=isReflectingExternalEdits) BOOL reflectingExternalEdits;
@property (retain, nonatomic) NSMutableArray *rollingSuggestions;
@property struct _NSRange { unsigned long long location; unsigned long long length; } rollingSuggestionsRange;

- (id)init;
- (void).cxx_destruct;

@end
