@class NSStackView, NSTextField;
@protocol AVFunctionBarMediaSelectionViewControllerDelegate, AVFunctionBarMediaSelectionControlling;

@interface AVFunctionBarMediaSelectionViewController : NSViewController {
    NSTextField *_audioLabel;
    NSTextField *_legibleLabel;
    NSStackView *_audioOptionsContainerView;
    NSStackView *_legibleOptionsContainerView;
}

@property (retain) id<AVFunctionBarMediaSelectionControlling> playerController;
@property (weak, nonatomic) id<AVFunctionBarMediaSelectionViewControllerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (void)actionAudioFunctionBarMediaSelectionOptionSelected:(id)a0;
- (void)_updateFunctionBarMediaSelectionOptionInContainerView:(id)a0 mediaSelectionOptions:(id)a1 currentMediaSelectionOption:(id)a2 selectionAction:(SEL)a3;
- (void)_updateButtonStatesForCurrentFunctionBarMediaSelectionOption:(id)a0 containerView:(id)a1;
- (void)actionLegibleFunctionBarMediaSelectionOptionSelected:(id)a0;

@end
