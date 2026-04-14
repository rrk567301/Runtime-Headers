@class NSError;

@interface BPSCompletion : NSObject

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSError *error;

+ (id)success;
+ (id)new;
+ (id)failureWithError:(id)a0;

- (id)initWithState:(long long)a0 error:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
