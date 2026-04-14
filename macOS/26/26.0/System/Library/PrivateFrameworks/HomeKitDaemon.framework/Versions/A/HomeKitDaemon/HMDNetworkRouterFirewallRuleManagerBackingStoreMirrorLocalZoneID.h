@class NSData, NSString, NSArray;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorLocalZoneID : HMFObject <HMBLocalZoneID>

@property (readonly, nonatomic) NSData *token;
@property (readonly, nonatomic) NSString *name;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)labels;
- (id)initWithToken:(id)a0;
- (void).cxx_destruct;

@end
