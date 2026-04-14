@class NSError, NSString;
@protocol CUIKCommitDelegate, CUIKDecisionDelegate;

@interface CUIKUndoManager : NSUndoManager <CUIKUndoDelegate>

@property (retain) id<CUIKCommitDelegate> commitDelegate;
@property (retain) id<CUIKDecisionDelegate> decisionDelegate;
@property (copy, nonatomic) id /* block */ editingManagerProvider;
@property (retain) NSError *lastError;
@property BOOL disableUndoForOrganizerScheduling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationForAction:(unsigned long long)a0 context:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)handleUndoForOperation:(id)a0;
- (void)undoOperation:(id)a0;
- (void)clearUndoOperations;

@end
