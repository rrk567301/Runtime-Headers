@class NSData, NSString, NSArray;

@interface CtrMeshDiagUnsupportedEnhancedDiagnosticsNodeInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *extAddress;
@property (readonly) unsigned short rloc16;
@property (readonly) unsigned char routerId;
@property (readonly) unsigned short version;
@property (readonly) BOOL isThisDevice;
@property (readonly) BOOL isThisDeviceParent;
@property (readonly) BOOL isLeader;
@property (readonly) BOOL isBorderRouter;
@property (readonly) NSString *vendorName;
@property (readonly) NSString *vendorModel;
@property (readonly) NSArray *ipv6Addresses;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithExtAddress:(id)a0 rloc16:(unsigned short)a1 routerId:(unsigned char)a2 version:(unsigned short)a3 isThisDevice:(BOOL)a4 isThisDeviceParent:(BOOL)a5 isLeader:(BOOL)a6 isBorderRouter:(BOOL)a7 vendorName:(id)a8 vendorModel:(id)a9 ipv6Addresses:(id)a10;

@end
