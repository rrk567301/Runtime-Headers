@class NSError;

@interface MOCompletion : NSObject

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSError *error;

+ (id)failureWithError:(id)a0;
+ (id)success;

- (id)initWithState:(unsigned long long)a0 error:(id)a1;
- (void).cxx_destruct;

@end
