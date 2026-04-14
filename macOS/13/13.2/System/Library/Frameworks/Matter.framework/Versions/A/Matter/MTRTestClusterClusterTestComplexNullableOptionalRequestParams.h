@class NSString, NSArray, MTRTestClusterClusterSimpleStruct, NSNumber;

@interface MTRTestClusterClusterTestComplexNullableOptionalRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *nullableInt;
@property (copy, nonatomic) NSNumber *optionalInt;
@property (copy, nonatomic) NSNumber *nullableOptionalInt;
@property (copy, nonatomic) NSString *nullableString;
@property (copy, nonatomic) NSString *optionalString;
@property (copy, nonatomic) NSString *nullableOptionalString;
@property (copy, nonatomic) MTRTestClusterClusterSimpleStruct *nullableStruct;
@property (copy, nonatomic) MTRTestClusterClusterSimpleStruct *optionalStruct;
@property (copy, nonatomic) MTRTestClusterClusterSimpleStruct *nullableOptionalStruct;
@property (copy, nonatomic) NSArray *nullableList;
@property (copy, nonatomic) NSArray *optionalList;
@property (copy, nonatomic) NSArray *nullableOptionalList;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
