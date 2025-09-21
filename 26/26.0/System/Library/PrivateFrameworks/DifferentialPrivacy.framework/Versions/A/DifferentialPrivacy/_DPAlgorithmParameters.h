@class NSDictionary;

@interface _DPAlgorithmParameters : NSObject

@property (readonly, nonatomic) NSDictionary *parameterDictionary;

+ (BOOL)allowDPMechanismNone:(id)a0;
+ (id)algorithmParametersForKey:(id)a0;
+ (id)parametersFromFile:(id)a0;
+ (id)algorithmParametersFromDictionary:(id)a0;
+ (id)allAlgorithmNames;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
