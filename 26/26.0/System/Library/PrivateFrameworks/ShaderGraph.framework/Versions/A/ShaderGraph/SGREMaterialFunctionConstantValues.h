@class NSMutableDictionary;

@interface SGREMaterialFunctionConstantValues : NSObject

@property (nonatomic, retain) NSMutableDictionary *scalarFunctionConstants;
@property (nonatomic, retain) NSMutableDictionary *vectorFunctionConstants;

- (id)init;
- (void).cxx_destruct;
- (id)initWithScalarFunctionConstants:(id)a0 vectorFunctionConstants:(id)a1;

@end
