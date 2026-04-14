@class NSNumber, NSData;

@interface MTRTLSClientManagementClusterTLSEndpointStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *endpointID;
@property (copy, nonatomic) NSData *hostname;
@property (copy, nonatomic) NSNumber *port;
@property (copy, nonatomic) NSNumber *caid;
@property (copy, nonatomic) NSNumber *ccdid;
@property (copy, nonatomic) NSNumber *referenceCount;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
