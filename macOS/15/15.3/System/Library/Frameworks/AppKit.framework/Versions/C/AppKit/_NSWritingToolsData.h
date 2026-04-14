@class NSView, NSArray, NSValue, NSMutableDictionary, _NSWritingToolsContext, WTSession, NSWritingToolsContextState, NSMutableArray, NSWritingToolsProofreadingController, NSWritingToolsCoordinator;

@interface _NSWritingToolsData : NSObject {
    long long nestedActionLevels;
    BOOL _isAborted;
    BOOL _inWritingToolsDelegate;
    BOOL _forceAcceptSuggestion;
    BOOL _isCompositionSession;
    BOOL _isListOrTableSession;
    BOOL _sessionFinished;
    BOOL _reflectingExternalEdits;
    NSWritingToolsCoordinator *_coordinator;
    _NSWritingToolsContext *_activeWritingToolsContext;
    WTSession *_wtSession;
    NSMutableDictionary *_rewrittenStateForSuggestionUUIDs;
    NSArray *_contexts;
    NSWritingToolsContextState *_contextState;
    NSWritingToolsProofreadingController *_proofreadingController;
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
