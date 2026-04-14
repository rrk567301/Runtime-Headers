@class ABUndoManager, NSObject;
@protocol OS_os_log, CNCancelable;

@interface ABNoteCollectionViewItem : ABCollectionViewItem {
    BOOL mHasSuspendedSuddenTermination;
    ABUndoManager *_undoManager;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id<CNCancelable> deferredSaveToken;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)commitEditing;
- (void)_updateViewValue;
- (BOOL)supportsClickToEdit;
- (void)datumView:(id)a0 textDidChange:(id)a1;
- (unsigned long long)noteInsertionPoint;
- (void)setNoteInsertionPoint:(unsigned long long)a0;
- (void)setValueEditable:(BOOL)a0;
- (void)didInsertIntoCollectionView:(id)a0;
- (void)didRemoveFromCollection:(id)a0;
- (void)datumViewDidEndEditing:(id)a0;
- (void)datumViewDidBecomeFirstResponder:(id)a0;
- (void)datumViewDidResignFirstResponder:(id)a0;
- (void)_updateTextView:(id)a0 withValue:(id)a1;
- (BOOL)shouldDrawDivider;
- (id)noteRowView;
- (void)requestDeferredSave;
- (void)deferredSave;

@end
