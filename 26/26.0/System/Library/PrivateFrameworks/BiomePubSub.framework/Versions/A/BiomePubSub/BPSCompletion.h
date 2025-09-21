@class NSError;

@interface BPSCompletion : NSObject

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSError *error;

+ (id)failureWithError:(id)a0;
+ (id)new;
+ (id)success;

- (id)init;
- (id)description;
- (id)initWithState:(long long)a0 error:(id)a1;
- (void).cxx_destruct;

@end
