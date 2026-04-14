@class NSNumber, NSArray;

@interface CHIPApplianceControlClusterWriteFunctionsParams : NSObject

@property (retain, nonatomic) NSNumber *functionId;
@property (retain, nonatomic) NSNumber *functionDataType;
@property (retain, nonatomic) NSArray *functionData;

- (id)init;
- (void).cxx_destruct;

@end
