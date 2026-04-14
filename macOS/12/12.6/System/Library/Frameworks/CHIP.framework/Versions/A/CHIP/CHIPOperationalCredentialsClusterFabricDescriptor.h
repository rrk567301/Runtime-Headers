@class NSData, NSNumber, NSString;

@interface CHIPOperationalCredentialsClusterFabricDescriptor : NSObject

@property (retain, nonatomic) NSData *rootPublicKey;
@property (retain, nonatomic) NSNumber *vendorId;
@property (retain, nonatomic) NSNumber *fabricId;
@property (retain, nonatomic) NSNumber *nodeId;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSNumber *fabricIndex;

- (id)init;
- (void).cxx_destruct;

@end
