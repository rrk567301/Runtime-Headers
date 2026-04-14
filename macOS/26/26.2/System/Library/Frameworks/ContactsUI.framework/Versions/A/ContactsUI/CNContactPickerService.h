@class CNContactPickerXPCRelay;
@protocol CNContactPickerInternalSetup, CNContactPickerViewController;

@interface CNContactPickerService : NSObject {
    CNContactPickerXPCRelay *_relay;
    id<CNContactPickerInternalSetup, CNContactPickerViewController> _viewController;
}

@property (readonly) CNContactPickerXPCRelay *XPCRelay;

+ (id)sharedService;

- (void)setViewController:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
