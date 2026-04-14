@class NSNumber;

@interface CHIPAccessControlClusterTarget : NSObject

@property (retain, nonatomic) NSNumber *cluster;
@property (retain, nonatomic) NSNumber *endpoint;
@property (retain, nonatomic) NSNumber *deviceType;

- (id)init;
- (void).cxx_destruct;

@end
