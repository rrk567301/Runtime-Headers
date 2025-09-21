@class NSString;

@interface _EARRelevantTextContext : NSObject {
    NSString *_leftContext;
    NSString *_rightContext;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _contextUpdateLock;
}

@property char disambiguationActive;
@property char cursorInVisibleText;
@property char favorCommandSuppression;
@property char abortCommandSuppression;
@property char undoEvent;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)setLeftContext:(id)a0;
- (void)appendToLeftContext:(id)a0;
- (void)getLeftAndRightContextWithCompletion:(id /* block */)a0;
- (char)getUndoEventAndReset;
- (void)notifyUndoEventFromClient;
- (void)setLeftContext:(id)a0 rightContext:(id)a1;
- (void)setRightContext:(id)a0;

@end
