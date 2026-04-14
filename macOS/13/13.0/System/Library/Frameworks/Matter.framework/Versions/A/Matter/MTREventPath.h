@class NSNumber;

@interface MTREventPath : NSObject

@property (readonly, nonatomic) NSNumber *endpoint;
@property (readonly, nonatomic) NSNumber *cluster;
@property (readonly, nonatomic) NSNumber *event;

+ (id)eventPathWithEndpointId:(id)a0 clusterId:(id)a1 eventId:(id)a2;

- (void).cxx_destruct;
- (id)initWithPath:(const struct ConcreteEventPath { unsigned short x0; BOOL x1; unsigned int x2; unsigned int x3; } *)a0;

@end
