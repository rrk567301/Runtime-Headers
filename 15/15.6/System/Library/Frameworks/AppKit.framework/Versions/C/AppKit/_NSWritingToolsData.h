@class NSView, NSArray, NSValue, NSMutableDictionary, WTSession, NSMutableArray, NSWritingToolsContextState, NSWritingToolsProofreadingController, NSWritingToolsCoordinator;

@interface _NSWritingToolsData : NSObject {
    long long nestedActionLevels;
    NSMutableArray *_transactionQueues;
    char _isAborted;
    char _inWritingToolsDelegate;
    char _isCompositionSession;
    char _isListOrTableSession;
    char _sessionFinished;
    char _reflectingExternalEdits;
    char _containsAttachments;
    NSWritingToolsCoordinator *_coordinator;
    WTSession *_wtSession;
    NSMutableDictionary *_rewrittenStateForSuggestionUUIDs;
    NSArray *_contexts;
    NSWritingToolsContextState *_contextState;
    NSWritingToolsProofreadingController *_proofreadingController;
    NSView *_underlinesView;
    long long _externalEditAction;
    NSMutableArray *_rollingSuggestions;
    NSValue *_rollingSuggestionsRange;
    long long _rollingDelta;
    NSValue *_lastDeliveredPendingRange;
    long long _lastDeliveredLength;
    struct _NSRange { unsigned long long location; unsigned long long length; } _initialSelectionRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _initialPonderingRange;
}

- (id)init;
- (void).cxx_destruct;
- (void)_removeQueue:(id)a0;

@end
