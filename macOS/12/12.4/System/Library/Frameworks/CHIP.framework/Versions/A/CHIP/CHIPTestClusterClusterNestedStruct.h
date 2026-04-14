@class NSNumber, CHIPTestClusterClusterSimpleStruct;

@interface CHIPTestClusterClusterNestedStruct : NSObject

@property (retain, nonatomic) NSNumber *a;
@property (retain, nonatomic) NSNumber *b;
@property (retain, nonatomic) CHIPTestClusterClusterSimpleStruct *c;

- (id)init;
- (void).cxx_destruct;

@end
