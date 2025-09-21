@class NSString, TLAlertConfiguration, ACAlertPresentationOptions;

@interface ActivityUIServices.ActivityAlertProvider : NSObject <ActivityUIServices.ActivityAlertProviding> {
    void /* unknown type, empty encoding */ activityIdentifier;
    void /* unknown type, empty encoding */ alertAction;
    void /* unknown type, empty encoding */ alertConfiguration;
    void /* unknown type, empty encoding */ payload;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *payloadIdentifier;
@property (nonatomic, retain) TLAlertConfiguration *configuration;
@property (nonatomic, retain) ACAlertPresentationOptions *presentationOptions;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) NSString *deviceIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 action:(long long)a1 presentationOptions:(id)a2 payload:(id)a3;

@end
