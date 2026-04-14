@class NSString, NSArray, WiFiMACAddress;

@interface WiFiAwareSrvInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) WiFiMACAddress *interfaceAddr;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) unsigned int publishServiceCount;
@property (readonly, nonatomic) unsigned int subscribeServiceCount;
@property (readonly, nonatomic) unsigned int srvSessionCount;
@property (readonly, nonatomic) NSArray *srvSessionInfos;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)detailedDescriptionWithChangedOptions:(id)a0 previousSrvInfo:(id)a1;
- (id)initWithInterfaceName:(id)a0 interfaceAddr:(id)a1 isEnabled:(BOOL)a2 publishServiceCount:(unsigned int)a3 subscribeServiceCount:(unsigned int)a4 srvSessionCount:(unsigned int)a5 srvSessionInfos:(id)a6;

@end
