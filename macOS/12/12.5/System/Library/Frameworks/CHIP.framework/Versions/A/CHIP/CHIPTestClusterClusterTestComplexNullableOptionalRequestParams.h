@class NSString, NSArray, CHIPTestClusterClusterSimpleStruct, NSNumber;

@interface CHIPTestClusterClusterTestComplexNullableOptionalRequestParams : NSObject

@property (retain, nonatomic) NSNumber *nullableInt;
@property (retain, nonatomic) NSNumber *optionalInt;
@property (retain, nonatomic) NSNumber *nullableOptionalInt;
@property (retain, nonatomic) NSString *nullableString;
@property (retain, nonatomic) NSString *optionalString;
@property (retain, nonatomic) NSString *nullableOptionalString;
@property (retain, nonatomic) CHIPTestClusterClusterSimpleStruct *nullableStruct;
@property (retain, nonatomic) CHIPTestClusterClusterSimpleStruct *optionalStruct;
@property (retain, nonatomic) CHIPTestClusterClusterSimpleStruct *nullableOptionalStruct;
@property (retain, nonatomic) NSArray *nullableList;
@property (retain, nonatomic) NSArray *optionalList;
@property (retain, nonatomic) NSArray *nullableOptionalList;

- (id)init;
- (void).cxx_destruct;

@end
