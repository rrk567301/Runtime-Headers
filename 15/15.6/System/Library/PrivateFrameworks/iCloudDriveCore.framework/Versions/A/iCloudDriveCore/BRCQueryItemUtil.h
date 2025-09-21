@interface BRCQueryItemUtil : NSObject {
    char _isMacOS;
}

+ (id)sharedQueryItemUtil;

- (long long)contentPolicyForItemInfo:(id)a0 sessionContext:(id)a1;
- (long long)contentPolicyForRootContainerWithSessionContext:(id)a0;
- (id)initWithMacOS:(char)a0;

@end
