@class NSWritingToolsProofreadingController, NSMutableDictionary, NSWritingToolsContextState, NSView, WTSession, NSValue, NSMutableArray;

@interface _NSTextViewWritingToolsData : NSObject {
    long long nestedActionLevels;
    BOOL _isAborted;
    BOOL _inWritingToolsDelegate;
    BOOL _forceAcceptSuggestion;
    BOOL _isCompositionSession;
    BOOL _sessionFinished;
    BOOL _reflectingExternalEdits;
    NSWritingToolsContextState *_contextState;
    NSWritingToolsProofreadingController *_proofreadingController;
    WTSession *_wtSession;
    NSMutableDictionary *_rewrittenStateForSuggestionUUIDs;
    NSView *_underlinesView;
    NSValue *_lastDeliveredPendingRange;
    long long _lastDeliveredLength;
    long long _externalEditAction;
    NSMutableArray *_rollingSuggestions;
    NSValue *_rollingSuggestionsRange;
    long long _rollingDelta;
    struct _NSRange { unsigned long long location; unsigned long long length; } _initialPonderingRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _initialSelectionRange;
}

- (id)init;
- (void).cxx_destruct;

@end
