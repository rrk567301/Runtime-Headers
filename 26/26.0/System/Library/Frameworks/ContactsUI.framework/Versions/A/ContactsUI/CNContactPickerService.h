@class CNContactPickerXPCRelay;
@protocol CNContactPickerInternalSetup, CNContactPickerViewController;

@interface CNContactPickerService : NSObject {
    CNContactPickerXPCRelay *_relay;
    id<CNContactPickerInternalSetup, CNContactPickerViewController> _viewController;
}

@property (readonly) CNContactPickerXPCRelay *XPCRelay;

+ (id)sharedService;

- (void)setViewController:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
