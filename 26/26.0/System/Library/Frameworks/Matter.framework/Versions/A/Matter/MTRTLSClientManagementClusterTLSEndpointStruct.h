@class NSNumber, NSData;

@interface MTRTLSClientManagementClusterTLSEndpointStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *endpointID;
@property (copy, nonatomic) NSData *hostname;
@property (copy, nonatomic) NSNumber *port;
@property (copy, nonatomic) NSNumber *caid;
@property (copy, nonatomic) NSNumber *ccdid;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
