@class NSDictionary;

@interface MLRTrialTaskResult : NSObject

@property (readonly, nonatomic) NSDictionary *JSONResult;

- (id)description;
- (void).cxx_destruct;
- (id)initWithJSONResult:(id)a0;
- (char)submitForTask:(id)a0 error:(id *)a1;

@end
