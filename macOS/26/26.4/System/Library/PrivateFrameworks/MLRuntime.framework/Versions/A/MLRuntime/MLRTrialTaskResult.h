@class NSDictionary;

@interface MLRTrialTaskResult : NSObject

@property (readonly, nonatomic) NSDictionary *JSONResult;

- (void).cxx_destruct;
- (id)description;
- (id)initWithJSONResult:(id)a0;
- (BOOL)submitForTask:(id)a0 error:(id *)a1;

@end
