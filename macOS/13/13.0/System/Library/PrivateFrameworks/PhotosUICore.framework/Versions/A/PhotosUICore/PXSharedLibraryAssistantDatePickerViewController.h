@class NSTextField, NSDatePicker, NSString, NSDate, PXAssistantTemplateView, PXSharedLibraryAssistantViewModel;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryAssistantDatePickerViewController : PXAssistantTemplateViewController <PXChangeObserver, PXAssistantViewController> {
    NSTextField *_pickerDetailLabel;
    NSTextField *_footerLabel;
    PXAssistantTemplateView *_templateView;
}

@property (readonly, nonatomic) NSDatePicker *datePicker;
@property (nonatomic) BOOL hasCustomDate;
@property (retain, nonatomic) NSDate *pickedDate;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)firstButtonAction:(id)a0;
- (void)thirdButtonAction:(id)a0;
- (void)_updateButtonItems;
- (void)_updateFooterLabel;
- (void)_datePickerDidChange:(id)a0;
- (void)_updateSubtitleText;
- (void)footerTextWithCompletion:(id /* block */)a0;
- (void)truncateAndSetPickedDate:(id)a0;
- (void)restorePickerDate;
- (void)resetPickerDate;
- (void)_resetPickerWithDate:(id)a0;
- (void)skipPickedDateAndContinue;
- (void)usePickedDateAndContinueWithCompletionHandler:(id /* block */)a0;
- (void)_updateViewModelForStartDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)_continueAssistant;

@end
