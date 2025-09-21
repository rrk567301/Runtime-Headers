@class NSNumber;

@interface MTREventPath : MTRClusterPath

@property (readonly, copy, nonatomic) NSNumber *event;

+ (BOOL)supportsSecureCoding;
+ (id)eventPathWithEndpointID:(id)a0 clusterID:(id)a1 eventID:(id)a2;
+ (id)eventPathWithEndpointId:(id)a0 clusterId:(id)a1 eventId:(id)a2;

- (id)initWithPath:(const struct ConcreteEventPath { unsigned short x0; BOOL x1; unsigned int x2; unsigned int x3; } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct ConcreteEventPath { unsigned short x0; BOOL x1; unsigned int x2; unsigned int x3; })_asConcretePath;
- (BOOL)isEqualToEventPath:(id)a0;

@end
