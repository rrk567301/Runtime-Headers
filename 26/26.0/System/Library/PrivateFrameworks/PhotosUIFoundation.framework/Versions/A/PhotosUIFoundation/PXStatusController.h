@class PXContentUnavailableConfiguration, PXStatusViewModel, NSString;
@protocol PXStatusControllerDelegate, NSObject;

@interface PXStatusController : NSObject <PXChangeObserver>

@property (retain, nonatomic) id<NSObject> confirmationAlertToken;
@property (retain, nonatomic) PXStatusViewModel *viewModel;
@property (weak, nonatomic) id<PXStatusControllerDelegate> delegate;
@property (readonly, nonatomic) PXContentUnavailableConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateTitle;
- (id)init;
- (void).cxx_destruct;
- (void)_handleButtonAction:(id)a0;
- (void)_updateButtonTitle;
- (void)_updateMessage;

@end
