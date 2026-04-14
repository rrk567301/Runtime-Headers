@interface AMSUIWebRegulatoryAgeVerificationAction : AMSUIWebAction {
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ accountParameters;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ verificationMethods;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
