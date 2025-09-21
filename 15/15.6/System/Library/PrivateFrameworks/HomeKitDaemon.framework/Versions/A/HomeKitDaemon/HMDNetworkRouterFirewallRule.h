@class NSString, NSDictionary;

@interface HMDNetworkRouterFirewallRule : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isCritical) char critical;
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly, nonatomic) NSDictionary *jsonDictionary;
@property (readonly, nonatomic) NSString *jsonString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)__transportProtocolToString:(unsigned char)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithJSONDictionary:(id)a0 critical:(char)a1;
- (id)initWithJSONDictionary:(id)a0 name:(id)a1 critical:(char)a2;

@end
