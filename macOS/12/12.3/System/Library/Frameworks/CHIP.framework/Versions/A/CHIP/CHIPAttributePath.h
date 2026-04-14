@class NSNumber;

@interface CHIPAttributePath : NSObject

@property (readonly, nonatomic) NSNumber *endpoint;
@property (readonly, nonatomic) NSNumber *cluster;
@property (readonly, nonatomic) NSNumber *attribute;

- (void).cxx_destruct;
- (id)initWithPath:(const struct ConcreteDataAttributePath { unsigned short x0; unsigned int x1; unsigned int x2; unsigned short x3; int x4; } *)a0;

@end
