@interface ReplicatorServices.ReplicatorControlClientObjcBridge : NSObject {
    void /* unknown type, empty encoding */ controlClient;
}

- (id)devices;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)allowList;
- (id)init;
- (void)setAllowList:(id)a0;
- (BOOL)isAllowListEnabled;
- (id)pushToken:(id)a0;

@end
