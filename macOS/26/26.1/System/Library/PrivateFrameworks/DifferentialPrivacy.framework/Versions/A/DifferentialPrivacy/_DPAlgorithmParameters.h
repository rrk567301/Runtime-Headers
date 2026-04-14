@class NSDictionary;

@interface _DPAlgorithmParameters : NSObject

@property (readonly, nonatomic) NSDictionary *parameterDictionary;

+ (BOOL)allowDPMechanismNone:(id)a0;
+ (id)algorithmParametersForKey:(id)a0;
+ (id)allAlgorithmNames;
+ (id)algorithmParametersFromDictionary:(id)a0;
+ (id)parametersFromFile:(id)a0;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
