@class NSNumber, NSData, NSString;

@interface CHIPOperationalCredentialsClusterFabricDescriptor : NSObject

@property (retain, nonatomic) NSNumber *fabricIndex;
@property (retain, nonatomic) NSData *rootPublicKey;
@property (retain, nonatomic) NSNumber *vendorId;
@property (retain, nonatomic) NSNumber *fabricId;
@property (retain, nonatomic) NSNumber *nodeId;
@property (retain, nonatomic) NSString *label;

- (id)init;
- (void).cxx_destruct;

@end
