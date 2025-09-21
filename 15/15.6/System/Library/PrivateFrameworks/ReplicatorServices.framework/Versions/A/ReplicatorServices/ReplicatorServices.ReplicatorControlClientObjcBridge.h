@interface ReplicatorServices.ReplicatorControlClientObjcBridge : NSObject {
    void /* unknown type, empty encoding */ controlClient;
}

- (id)init;
- (void).cxx_destruct;
- (void)setEnabled:(char)a0;
- (char)isEnabled;
- (void)setAllowList:(id)a0;
- (id)devices;
- (id)allowList;
- (char)isAllowListEnabled;
- (id)pushToken:(id)a0;

@end
