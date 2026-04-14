@class NSNumber;

@interface MTRCommandPath : NSObject

@property (readonly, nonatomic) NSNumber *endpoint;
@property (readonly, nonatomic) NSNumber *cluster;
@property (readonly, nonatomic) NSNumber *command;

+ (id)commandPathWithEndpointId:(id)a0 clusterId:(id)a1 commandId:(id)a2;

- (void).cxx_destruct;
- (id)initWithPath:(const struct ConcreteCommandPath { unsigned short x0; BOOL x1; unsigned int x2; unsigned int x3; } *)a0;

@end
