@class NSDictionary;

@interface _DPAlgorithmParameters : NSObject

@property (readonly, nonatomic) NSDictionary *parameterDictionary;

+ (id)parametersFromFile:(id)a0;
+ (id)algorithmParametersFromDictionary:(id)a0;
+ (id)algorithmParametersForKey:(id)a0;
+ (id)allAlgorithmNames;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
