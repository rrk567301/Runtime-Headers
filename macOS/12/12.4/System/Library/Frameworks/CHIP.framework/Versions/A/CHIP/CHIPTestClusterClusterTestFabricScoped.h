@class NSString, NSArray, CHIPTestClusterClusterSimpleStruct, NSNumber;

@interface CHIPTestClusterClusterTestFabricScoped : NSObject

@property (retain, nonatomic) NSNumber *fabricIndex;
@property (retain, nonatomic) NSNumber *fabricSensitiveInt8u;
@property (retain, nonatomic) NSNumber *optionalFabricSensitiveInt8u;
@property (retain, nonatomic) NSNumber *nullableFabricSensitiveInt8u;
@property (retain, nonatomic) NSNumber *nullableOptionalFabricSensitiveInt8u;
@property (retain, nonatomic) NSString *fabricSensitiveCharString;
@property (retain, nonatomic) CHIPTestClusterClusterSimpleStruct *fabricSensitiveStruct;
@property (retain, nonatomic) NSArray *fabricSensitiveInt8uList;

- (id)init;
- (void).cxx_destruct;

@end
