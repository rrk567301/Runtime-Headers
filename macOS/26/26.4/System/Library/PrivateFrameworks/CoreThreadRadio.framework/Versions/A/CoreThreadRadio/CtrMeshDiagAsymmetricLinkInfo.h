@class NSData, NSString, NSArray;

@interface CtrMeshDiagAsymmetricLinkInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *nodeAExtAddress;
@property (readonly) unsigned short nodeARloc16;
@property (readonly) unsigned char nodeARouterId;
@property (readonly) NSString *nodeAVendorName;
@property (readonly) NSString *nodeAVendorModel;
@property (readonly) NSData *nodeBExtAddress;
@property (readonly) unsigned short nodeBRloc16;
@property (readonly) unsigned char nodeBRouterId;
@property (readonly) NSString *nodeBVendorName;
@property (readonly) NSString *nodeBVendorModel;
@property (readonly) unsigned char forwardLinkCost;
@property (readonly) unsigned char reverseLinkCost;
@property (readonly) unsigned char costDifference;
@property (readonly) NSArray *nodeAIpv6Addresses;
@property (readonly) NSArray *nodeBIpv6Addresses;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNodeAExtAddress:(id)a0 nodeARloc16:(unsigned short)a1 nodeARouterId:(unsigned char)a2 nodeAVendorName:(id)a3 nodeAVendorModel:(id)a4 nodeBExtAddress:(id)a5 nodeBRloc16:(unsigned short)a6 nodeBRouterId:(unsigned char)a7 nodeBVendorName:(id)a8 nodeBVendorModel:(id)a9 forwardLinkCost:(unsigned char)a10 reverseLinkCost:(unsigned char)a11 costDifference:(unsigned char)a12 nodeAIpv6Addresses:(id)a13 nodeBIpv6Addresses:(id)a14;
- (id)initWithNodeAExtAddress:(id)a0 peerExtAddress:(id)a1 localRloc16:(unsigned short)a2 peerRloc16:(unsigned short)a3 localRouterId:(unsigned char)a4 peerRouterId:(unsigned char)a5 localLinkQuality:(unsigned char)a6 peerLinkQuality:(unsigned char)a7 localRssi:(char)a8 peerRssi:(char)a9;

@end
