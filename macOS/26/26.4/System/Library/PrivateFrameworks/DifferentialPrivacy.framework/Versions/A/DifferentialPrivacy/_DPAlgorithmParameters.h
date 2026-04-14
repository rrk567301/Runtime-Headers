@class NSDictionary;

@interface _DPAlgorithmParameters : NSObject

@property (readonly, nonatomic) NSDictionary *parameterDictionary;

+ (id)parametersFromFile:(id)a0;
+ (BOOL)allowDPMechanismNone:(id)a0;
+ (id)allAlgorithmNames;
+ (id)algorithmParametersForKey:(id)a0;
+ (id)algorithmParametersFromDictionary:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
