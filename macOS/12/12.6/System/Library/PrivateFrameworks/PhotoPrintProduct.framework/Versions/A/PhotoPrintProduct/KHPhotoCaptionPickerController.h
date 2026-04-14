@class NSString, NSPopUpButton, KHCalendarCell, KHProject;

@interface KHPhotoCaptionPickerController : UXViewController <UXCollectionViewDelegate>

@property BOOL showCaption;
@property (retain) NSPopUpButton *captionButton;
@property (retain, nonatomic) KHCalendarCell *currentCell;
@property (retain) KHProject *project;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)a0;
- (void)loadView;
- (void)captionNone:(id)a0;
- (void)captionAbove:(id)a0;
- (void)captionRight:(id)a0;
- (void)captionBottom:(id)a0;
- (void)captionLeft:(id)a0;
- (id)_captionEntry;
- (void)_ensureCaptionState;

@end
