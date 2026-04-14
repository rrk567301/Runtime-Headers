@interface BRCQueryItemUtil : NSObject {
    BOOL _isMacOS;
}

+ (id)sharedQueryItemUtil;

- (void)contentAndNamespacePolicyForItemInfo:(id)a0 sessionContext:(id)a1 contentPolicy:(long long *)a2 namespacePolicy:(long long *)a3;
- (void)contentAndNamespacePolicyForRootContainerWithSessionContext:(id)a0 contentPolicy:(long long *)a1 namespacePolicy:(long long *)a2;
- (id)initWithMacOS:(BOOL)a0;

@end
