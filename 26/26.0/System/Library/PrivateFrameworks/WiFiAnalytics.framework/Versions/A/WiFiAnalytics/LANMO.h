@class NSString, NSSet;

@interface LANMO : UniqueMO <UniqueMoProtocol, DeploymentProtocol>

@property (readonly, nonatomic) int bssCount;
@property (nonatomic) BOOL has2GHz;
@property (nonatomic) BOOL has5GHz;
@property (nonatomic) BOOL has6GHz;
@property (copy, nonatomic) NSString *ipv4NetworkSignature;
@property (copy, nonatomic) NSString *ipv6NetworkSignature;
@property (nonatomic) short latestCompleteWeekUsageCumulativePercentage;
@property (nonatomic) long long latestCompleteWeekUsageCumulativeSeconds;
@property (nonatomic) short latestCompleteWeekUsagePercentage;
@property (nonatomic) long long latestCompleteWeekUsageSeconds;
@property (nonatomic) int t_networksCount;
@property (retain, nonatomic) NSSet *bsses;
@property (retain, nonatomic) NSSet *faults;
@property (retain, nonatomic) NSSet *joins;
@property (retain, nonatomic) NSSet *leaves;
@property (retain, nonatomic) NSSet *linkTests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)verifyConstraints:(id)a0 withError:(id *)a1;
+ (id)fetchRequest;
+ (id)constraintsWithDhcpServerInfo:(id)a0;
+ (id)predicateForLANsInNetwork:(id)a0 withError:(id *)a1;
+ (id)predicateForLanContainingBSS:(id)a0 withError:(id *)a1;

- (BOOL)isPublic;
- (BOOL)isEnterprise;

@end
