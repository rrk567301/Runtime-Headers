@class NSString, NSArray, MTRTestClusterClusterSimpleStruct, NSNumber;

@interface MTRTestClusterClusterTestFabricScoped : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *fabricSensitiveInt8u;
@property (copy, nonatomic) NSNumber *optionalFabricSensitiveInt8u;
@property (copy, nonatomic) NSNumber *nullableFabricSensitiveInt8u;
@property (copy, nonatomic) NSNumber *nullableOptionalFabricSensitiveInt8u;
@property (copy, nonatomic) NSString *fabricSensitiveCharString;
@property (copy, nonatomic) MTRTestClusterClusterSimpleStruct *fabricSensitiveStruct;
@property (copy, nonatomic) NSArray *fabricSensitiveInt8uList;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
