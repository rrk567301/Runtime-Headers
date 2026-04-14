@class NSDictionary, NSError;
@protocol LACEvaluationRequest;

@interface LACEvaluationResult : NSObject

@property (readonly, nonatomic) long long rawValue;
@property (readonly, nonatomic) NSDictionary *value;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) id<LACEvaluationRequest> request;

+ (id)resultWithNext:(id)a0;
+ (id)resultWithFailure:(id)a0;
+ (id)resultWithRetry:(id)a0 error:(id)a1;
+ (id)resultWithSuccess:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0 error:(id)a1 request:(id)a2;

@end
