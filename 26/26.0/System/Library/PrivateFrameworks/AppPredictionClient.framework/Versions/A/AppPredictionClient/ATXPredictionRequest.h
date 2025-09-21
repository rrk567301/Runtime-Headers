@protocol ATXPredictionScope;

@interface ATXPredictionRequest : NSObject

@property (readonly, nonatomic) unsigned long long limit;
@property (readonly, nonatomic) id<ATXPredictionScope> scope;

- (void).cxx_destruct;
- (id)initWithLimit:(unsigned long long)a0 scope:(id)a1;

@end
