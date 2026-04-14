@class NSData, NSString, NSArray;

@interface CtrMeshDiagUnreliableNodeInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *extAddress;
@property (readonly) unsigned short rloc16;
@property (readonly) unsigned char routerId;
@property (readonly) unsigned short version;
@property (readonly) unsigned short reasonFlags;
@property (readonly) unsigned short userActionFlags;
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
- (id)initWithExtAddress:(id)a0 rloc16:(unsigned short)a1 routerId:(unsigned char)a2 version:(unsigned short)a3 reasonFlags:(unsigned short)a4 userActionFlags:(unsigned short)a5 isThisDevice:(BOOL)a6 isThisDeviceParent:(BOOL)a7 isLeader:(BOOL)a8 isBorderRouter:(BOOL)a9 vendorName:(id)a10 vendorModel:(id)a11 ipv6Addresses:(id)a12;

@end
