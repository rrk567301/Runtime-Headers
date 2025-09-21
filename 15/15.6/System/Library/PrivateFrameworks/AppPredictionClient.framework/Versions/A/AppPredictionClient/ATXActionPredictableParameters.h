@class NSSet;

@interface ATXActionPredictableParameters : NSObject

@property (readonly, nonatomic) NSSet *parameterKeys;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithParameterKeys:(id)a0;
- (char)isEqualToATXActionPredictableParameters:(id)a0;

@end
