@class NSString, PHPickerViewController;

@interface SiriSharedUIPhPicker : NSObject <PHPickerViewControllerDelegate> {
    PHPickerViewController *_pickerViewController;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)_dismissWithAnimation:(BOOL)a0;
- (void)dismissPhotoPickerIfExistsWithAnimation:(BOOL)a0;
- (void)presentPhotoPicker:(id)a0 withSearchString:(id)a1 completion:(id /* block */)a2;

@end
