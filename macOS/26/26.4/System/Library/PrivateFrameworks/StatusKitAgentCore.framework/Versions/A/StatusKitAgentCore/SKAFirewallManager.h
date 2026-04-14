@class NSArray, NSString, NSError, SKHandle;

@interface SKAFirewallManager : SwiftNativeNSObject <SKAFirewallManaging> {
    void /* unknown type, empty encoding */ firewall;
}

- (id)init;
- (void)donateTrustedHandles:(NSArray *)a0 completion:(void (^)(NSError *))a1;
- (void)isMergeID:(NSString *)a0 fromHandleID:(SKHandle *)a1 inFirewallForService:(NSString *)a2 completion:(void (^)(BOOL, NSError *))a3;
- (void)isMergeIDInFirewall:(NSString *)a0 fromHandleID:(SKHandle *)a1 completion:(void (^)(BOOL, NSError *))a2;

@end
