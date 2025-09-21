@class CDPUIDeviceToDeviceEncryptionFlowContext, NSString;

@interface CDPUIDeviceToDeviceEncryptionMessagingViewModel : NSObject <CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol>

@property (readonly) char is2FA;
@property (readonly) char hasLocalSecret;
@property (readonly) CDPUIDeviceToDeviceEncryptionFlowContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)message;
- (id)title;
- (id)cancelTitle;
- (id)continueTitle;
- (id)initWithContext:(id)a0 is2FA:(char)a1 hasLocalSecret:(char)a2;

@end
