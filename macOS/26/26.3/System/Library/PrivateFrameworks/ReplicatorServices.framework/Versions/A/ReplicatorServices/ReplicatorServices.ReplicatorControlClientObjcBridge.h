@interface ReplicatorServices.ReplicatorControlClientObjcBridge : NSObject {
    void /* unknown type, empty encoding */ controlClient;
}

- (id)devices;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)a0;
- (id)init;
- (id)allowList;
- (void).cxx_destruct;
- (void)setAllowList:(id)a0;
- (BOOL)isAllowListEnabled;
- (id)pushToken:(id)a0;

@end
