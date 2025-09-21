@class ACAccount;

@interface AMSDeviceMessengerFilter : NSObject

@property long long messageType;
@property (retain) ACAccount *account;
@property long long deviceType;

- (void).cxx_destruct;
- (char)matchesMessage:(id)a0;

@end
