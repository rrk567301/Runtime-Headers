@class NSSet;

@interface ATXActionPredictableParameters : NSObject

@property (readonly, nonatomic) NSSet *parameterKeys;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithParameterKeys:(id)a0;
- (BOOL)isEqualToATXActionPredictableParameters:(id)a0;

@end
