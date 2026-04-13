@class TLKStackView, TLKStoreButton, TLKImageView, SFShowPurchaseRequestSheetCommand;
@protocol NSObject;

@interface SearchUIPurchaseRequestButton : SearchUIAccessoryViewController

@property (retain, nonatomic) TLKStoreButton *appStoreButton;
@property (retain, nonatomic) TLKImageView *imageView;
@property (retain, nonatomic) TLKStackView *stackView;
@property (retain, nonatomic) SFShowPurchaseRequestSheetCommand *command;
@property (retain, nonatomic) id<NSObject> purchaseRequestStatusObserver;

+ (BOOL)supportsRowModel:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)setupView;
- (void)buttonPressed;
- (void)updateButtonState;
- (void)updateWithRowModel:(id)a0;

@end
