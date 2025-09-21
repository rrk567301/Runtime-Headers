@class NSString, NSObject;
@protocol OS_nw_interface;

@interface NWInterface : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char supportsMulticast;
@property (readonly, nonatomic) char hasDNS;
@property (readonly, nonatomic) char hasNAT64;
@property (readonly, nonatomic, getter=isIPv4Routable) char ipv4Routable;
@property (readonly, nonatomic, getter=isIPv6Routable) char ipv6Routable;
@property (readonly, nonatomic) NSObject<OS_nw_interface> *cInterface;
@property (retain) NSObject<OS_nw_interface> *internalInterface;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, nonatomic) long long mtu;
@property (readonly, nonatomic) NWInterface *delegateInterface;
@property (readonly, nonatomic) NSString *typeString;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (readonly, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) unsigned long long interfaceIndex;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long subtype;
@property (readonly, nonatomic, getter=isExpensive) char expensive;
@property (readonly, nonatomic, getter=isConstrained) char constrained;

+ (id)descriptionForSubtype:(long long)a0;
+ (id)descriptionForType:(long long)a0;
+ (id)interfaceWithProtocolBufferData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInterface:(id)a0;
- (char)isShallowEqual:(id)a0;
- (id)copyLocalAddressForDefaultIPv4;
- (id)copyLocalAddressForDefaultIPv6;
- (id)copyLocalAddressForRemoteAddress:(id)a0;
- (id)createProtocolBufferObject;
- (id)descriptionWithIndent:(int)a0 showFullContent:(char)a1;
- (id)initWithInterfaceIndex:(unsigned long long)a0;
- (id)initWithInterfaceIndex:(unsigned long long)a0 interfaceName:(id)a1;
- (id)initWithInterfaceName:(id)a0;
- (id)ipv4Broadcast;
- (id)ipv4Netmask;
- (char)isDeepEqual:(id)a0;
- (char)isUltraConstrained;

@end
