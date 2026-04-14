@class NSError;

@interface BPSCompletion : NSObject

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSError *error;

+ (id)new;
+ (id)failureWithError:(id)a0;
+ (id)success;

- (id)initWithState:(long long)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
