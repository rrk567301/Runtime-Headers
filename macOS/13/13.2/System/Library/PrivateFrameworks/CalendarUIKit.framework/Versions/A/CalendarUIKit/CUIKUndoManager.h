@class NSMutableDictionary, NSString, CUIKUndoableEditor, NSError;
@protocol CUIKCommitDelegate, CUIKDecisionDelegate;

@interface CUIKUndoManager : NSUndoManager <CUIKUndoDelegate>

@property (retain, nonatomic) NSMutableDictionary *undeletedObjectMap;
@property (retain, nonatomic) NSMutableDictionary *specificIdentifierMapForUndo;
@property (retain, nonatomic) NSMutableDictionary *specificIdentifierMapForRevert;
@property (retain, nonatomic) id<CUIKCommitDelegate> commitDelegate;
@property (retain, nonatomic) id<CUIKDecisionDelegate> decisionDelegate;
@property (copy, nonatomic) id /* block */ editingManagerProvider;
@property (retain, nonatomic) CUIKUndoableEditor *undoableEditor;
@property (retain, nonatomic) NSError *lastError;
@property BOOL disableUndoForOrganizerScheduling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationForAction:(unsigned long long)a0 context:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)removeAllActions;
- (void)undoOperation:(id)a0;
- (void)handleUndoForOperation:(id)a0;
- (void)clearUndoOperations;
- (id)objectToSaveForUndoingChangeToObject:(id)a0;
- (id)objectToSaveForRevertingChangeToObject:(id)a0;
- (void)setUndoObject:(id)a0 forSpecificIdentifier:(id)a1;
- (void)setRevertObject:(id)a0 forSpecificIdentifier:(id)a1;
- (void)objectWithSpecificIdentifierWasReverted:(id)a0;
- (void)_registerUndeletedObject:(id)a0 withOriginalObjectID:(id)a1;
- (void)_clearUndeletedObjects;

@end
