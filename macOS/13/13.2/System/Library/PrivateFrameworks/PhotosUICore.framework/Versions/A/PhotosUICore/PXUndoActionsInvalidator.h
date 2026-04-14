@class PXContentPrivacyController, NSString, NSUndoManager, NSDate;

@interface PXUndoActionsInvalidator : NSObject <PXChangeObserver>

@property (retain, nonatomic) NSUndoManager *undoManager;
@property (retain, nonatomic) PXContentPrivacyController *privacyController;
@property (nonatomic, getter=isObservingApplicationState) BOOL observingApplicationState;
@property (retain, nonatomic) NSDate *lastBackgroundingDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)clearUndoStack;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithUndoManager:(id)a0 privacyController:(id)a1;
- (void)beginObservingSystemEventsForAutomaticInvalidation;
- (void)stopObservingSystemEventsForAutomaticInvalidation;
- (void)updateLastBackgroundDate;
- (void)clearUndoStackIfNeeded;

@end
