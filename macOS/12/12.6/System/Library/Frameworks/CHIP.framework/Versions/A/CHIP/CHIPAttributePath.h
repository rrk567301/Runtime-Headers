@class NSNumber;

@interface CHIPAttributePath : NSObject

@property (readonly, nonatomic) NSNumber *endpoint;
@property (readonly, nonatomic) NSNumber *cluster;
@property (readonly, nonatomic) NSNumber *attribute;

+ (id)attributePathWithEndpointId:(id)a0 clusterId:(id)a1 attributeId:(id)a2;

- (void).cxx_destruct;
- (id)initWithPath:(const void *)a0;

@end
