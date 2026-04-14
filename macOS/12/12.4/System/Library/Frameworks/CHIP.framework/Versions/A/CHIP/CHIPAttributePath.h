@class NSNumber;

@interface CHIPAttributePath : NSObject

@property (readonly, nonatomic) NSNumber *endpoint;
@property (readonly, nonatomic) NSNumber *cluster;
@property (readonly, nonatomic) NSNumber *attribute;

- (void).cxx_destruct;
- (id)initWithPath:(const void *)a0;

@end
