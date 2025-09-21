@class NSURL;
@protocol ASKAirplaneModeInquiryDelegate;

@interface ASKAirplaneModeInquiry : NSObject

@property (class, readonly) NSURL *settingsURL;

@property (weak, nonatomic) id<ASKAirplaneModeInquiryDelegate> delegate;
@property (readonly, nonatomic) char isEnabled;

- (void).cxx_destruct;

@end
