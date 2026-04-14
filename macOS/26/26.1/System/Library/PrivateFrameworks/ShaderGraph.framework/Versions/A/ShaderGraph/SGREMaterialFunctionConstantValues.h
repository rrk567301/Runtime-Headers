@class NSMutableDictionary;

@interface SGREMaterialFunctionConstantValues : NSObject

@property (nonatomic, retain) NSMutableDictionary *scalarFunctionConstants;
@property (nonatomic, retain) NSMutableDictionary *vectorFunctionConstants;

- (void).cxx_destruct;
- (id)init;
- (id)initWithScalarFunctionConstants:(id)a0 vectorFunctionConstants:(id)a1;

@end
