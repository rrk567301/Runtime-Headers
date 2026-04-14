@interface AMSUIWebUpdatePasswordSettingsAction : AMSUIWebAction <AMSURLProtocolDelegate, NSURLSessionDelegate> {
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ freePasswordSetting;
    void /* unknown type, empty encoding */ paidPasswordSetting;
    void /* unknown type, empty encoding */ profile;
    void /* unknown type, empty encoding */ profileVersion;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
