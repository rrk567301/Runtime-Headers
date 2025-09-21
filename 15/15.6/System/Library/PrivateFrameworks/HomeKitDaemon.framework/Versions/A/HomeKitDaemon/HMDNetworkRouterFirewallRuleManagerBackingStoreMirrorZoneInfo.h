@class HMDNetworkRouterFirewallRuleCloudZone, HMBLocalZone, NSMutableSet, CKRecordZoneID;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorZoneInfo : HMFObject

@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, nonatomic) NSMutableSet *recordIDs;
@property (readonly, nonatomic) char zoneHasChanged;
@property (readonly, nonatomic) char zoneWasDeleted;
@property (readonly, nonatomic) char ignoreChangeToken;
@property (retain, nonatomic) HMDNetworkRouterFirewallRuleCloudZone *cloudZone;
@property (retain, nonatomic) HMBLocalZone *mirroredLocalZone;

- (void).cxx_destruct;
- (id)initWithZoneID:(id)a0;
- (void)forceRefresh;
- (void)markChanged;
- (void)markDeleted;

@end
