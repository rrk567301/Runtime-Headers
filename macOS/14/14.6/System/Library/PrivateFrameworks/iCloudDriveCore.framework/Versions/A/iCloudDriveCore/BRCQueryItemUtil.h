@interface BRCQueryItemUtil : NSObject {
    BOOL _isMacOS;
}

+ (id)sharedQueryItemUtil;

- (long long)contentPolicyForRootContainerWithOptimizeStorage:(BOOL)a0 isDataSeparated:(BOOL)a1;
- (long long)contentPolicyForZoneRoot:(BOOL)a0 optimizeStorage:(BOOL)a1 isAppInstalled:(BOOL)a2 isWallet:(BOOL)a3 isGreedyDocument:(BOOL)a4;
- (id)initWithMacOS:(BOOL)a0;

@end
