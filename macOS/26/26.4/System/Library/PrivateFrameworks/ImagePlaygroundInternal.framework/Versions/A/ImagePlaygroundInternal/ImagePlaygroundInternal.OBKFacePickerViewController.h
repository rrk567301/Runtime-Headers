@interface ImagePlaygroundInternal.OBKFacePickerViewController : NSViewController {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_facePickerGridView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_templateView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_carouselView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_personAttributesView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_chooseOtherPhotoButtonView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sharingAlert;
    void /* unknown type, empty encoding */ presentedFaceGridSheet;
}

- (void)viewDidAppear;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didTapAppearanceButton;
- (void)didTapCancelButton;
- (void)didTapDoneButton;
- (void)didTapPhotoButton;

@end
