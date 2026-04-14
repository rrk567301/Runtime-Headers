@class NSString, WiFiMACAddress;

@interface WiFiAwareState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) WiFiMACAddress *interfaceAddr;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL isFWElection;
@property (readonly, nonatomic) unsigned long long nanRole;
@property (readonly, nonatomic) long long hopCount;
@property (readonly, nonatomic) WiFiMACAddress *clusterId;
@property (readonly, nonatomic) long long selfRankM;
@property (readonly, nonatomic) long long selfRankR;
@property (readonly, nonatomic) WiFiMACAddress *immediateMaster;
@property (readonly, nonatomic) long long immediateMasterRankM;
@property (readonly, nonatomic) long long immediateMasterRankR;
@property (readonly, nonatomic) WiFiMACAddress *anchorMaster;
@property (readonly, nonatomic) long long anchorMasterRankM;
@property (readonly, nonatomic) long long anchorMasterRankR;
@property (readonly, nonatomic) long long ambtt;
@property (readonly, nonatomic) unsigned long long tsf;

+ (id)currentState;

- (id)initInternal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithChangedOptions:(id)a0;
- (id)descriptionWithChangedOptions:(id)a0 forceAllChangedOptions:(BOOL)a1;
- (id)initWithInterfaceName:(id)a0 interfaceAddr:(id)a1 isEnabled:(BOOL)a2 isFWElection:(BOOL)a3 nanRole:(unsigned long long)a4 hopCount:(long long)a5 clusterId:(id)a6 selfRankM:(long long)a7 selfRankR:(long long)a8 immediateMaster:(id)a9 immediateMasterRankM:(long long)a10 immediateMasterRankR:(long long)a11 anchorMaster:(id)a12 anchorMasterRankM:(long long)a13 anchorMasterRankR:(long long)a14 ambtt:(long long)a15 tsf:(unsigned long long)a16;

@end
