@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface SGTFolderNameField : NSTextField {
    BOOL _autocompleteInProgress;
    BOOL _suggestionsInitStarted;
    BOOL _selectionIsCompletion;
    NSObject<OS_dispatch_queue> *_cacheAccessQueue;
}

@property (copy) NSString *lastActualText;
@property (copy) NSString *lastCompletedText;
@property (copy) NSArray *suggestions;

- (void)textDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setStringValue:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)textViewDidChangeSelection:(id)a0;
- (void)dd_commonInit;
- (void)dd_complete;
- (id)dd_completionForPrefix:(id)a0;
- (void)dd_updatesuggestions;

@end
