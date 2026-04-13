@class NSNumber, NSString;

@interface CHIPPluginPairing : HMFObject <NSCopying>

@property (readonly) NSNumber *fabricID;
@property (readonly) NSNumber *nodeID;
@property (readonly) NSNumber *vendorID;
@property (readonly, copy) NSString *vendorName;
@property (readonly, copy) NSString *fabricLabel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithFabricID:(id)a0 nodeID:(id)a1 vendorID:(id)a2 vendorName:(id)a3 fabricLabel:(id)a4;
- (id)initWithCHIPResponseDictionary:(id)a0;
- (id)initWithFabricID:(id)a0 nodeID:(id)a1 vendorID:(id)a2 fabricLabel:(id)a3;
- (id)vendorNameForVendorID:(id)a0;

@end
