@class NSSet;

@interface ATXActionPredictableParameters : NSObject

@property (readonly, nonatomic) NSSet *parameterKeys;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithParameterKeys:(id)a0;
- (BOOL)isEqualToATXActionPredictableParameters:(id)a0;

@end
