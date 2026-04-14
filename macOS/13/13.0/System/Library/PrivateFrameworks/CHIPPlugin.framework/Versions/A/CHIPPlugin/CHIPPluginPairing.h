@class NSNumber, NSString, NSData;

@interface CHIPPluginPairing : HMFObject <NSCopying>

@property (readonly) NSNumber *nodeID;
@property (readonly) NSNumber *fabricID;
@property (readonly) NSNumber *fabricIndex;
@property (readonly, copy) NSString *fabricLabel;
@property (readonly) NSData *rootPublicKey;
@property (readonly) NSNumber *vendorID;
@property (readonly, copy) NSString *vendorName;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithNodeID:(id)a0 fabricID:(id)a1 fabricIndex:(id)a2 fabricLabel:(id)a3 rootPublicKey:(id)a4 vendorID:(id)a5 vendorName:(id)a6;
- (id)initWithCHIPFabricDescriptor:(id)a0 vendorName:(id)a1;

@end
