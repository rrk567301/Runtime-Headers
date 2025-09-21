@class NSURL;
@protocol AMSUIAirplaneModeInquiryDelegate;

@interface AMSUIAirplaneModeInquiry : NSObject

@property (class, readonly) NSURL *settingsURL;

@property (weak, nonatomic) id<AMSUIAirplaneModeInquiryDelegate> delegate;
@property (readonly, nonatomic) char isEnabled;

- (void).cxx_destruct;

@end
