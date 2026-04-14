@interface PGSocialGroupPersistenceActions : NSObject {
    void /* unknown type, empty encoding */ socialGroupsSkippedBecauseNoCommonAssets;
    void /* unknown type, empty encoding */ newAutomaticSocialGroupMembersAndOrders;
    void /* unknown type, empty encoding */ currentAutomaticSocialGroupsToModifyAndOrders;
    void /* unknown type, empty encoding */ outdatedAutomaticSocialGroupsToDelete;
}

- (void).cxx_destruct;
- (id)init;
- (long long)currentAutomaticSocialGroupsToModifyCount;
- (long long)newAutomaticSocialGroupsToCreateCount;
- (long long)outdatedAutomaticSocialGroupsToDeleteCount;
- (long long)socialGroupsSkippedBecauseNoCommonAssetsCount;

@end
