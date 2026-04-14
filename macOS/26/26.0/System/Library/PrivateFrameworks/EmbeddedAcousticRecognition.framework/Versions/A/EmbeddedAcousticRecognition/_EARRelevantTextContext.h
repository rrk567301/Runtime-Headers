@class NSString, NSArray;

@interface _EARRelevantTextContext : NSObject {
    NSString *_leftContext;
    NSString *_rightContext;
    NSArray *_preItnLeftContext;
    NSArray *_preItnRightContext;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _contextUpdateLock;
}

@property BOOL disambiguationActive;
@property BOOL cursorInVisibleText;
@property BOOL favorCommandSuppression;
@property BOOL abortCommandSuppression;
@property BOOL undoEvent;
@property BOOL utteranceStartedWithSelectedText;
@property BOOL leftContextWasAppended;
@property BOOL leftContextEndsWithAppendedAutoPunctuation;

- (void)reset;
- (id)init;
- (void).cxx_destruct;
- (void)_unlockedInitContext;
- (void)_unlockedSetLeftContext:(id)a0 preItnLeftContext:(id)a1;
- (void)_unlockedSetRightContext:(id)a0 preItnRightContext:(id)a1;
- (void)appendToLeftContext:(id)a0 preItnLeftContext:(id)a1;
- (void)getLeftAndRightContextWithCompletion:(id /* block */)a0;
- (BOOL)getUndoEventAndReset;
- (void)notifyUndoEventFromClient;
- (void)setLeftContext:(id)a0 preItnLeftContext:(id)a1;
- (void)setLeftContext:(id)a0 rightContext:(id)a1 preItnLeftContext:(id)a2 preItnRightContext:(id)a3;
- (void)setRightContext:(id)a0 preItnRightContext:(id)a1;

@end
