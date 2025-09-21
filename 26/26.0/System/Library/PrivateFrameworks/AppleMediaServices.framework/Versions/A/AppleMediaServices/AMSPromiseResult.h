@class NSError;

@interface AMSPromiseResult : NSObject

@property (copy) NSError *error;
@property (retain) id result;

- (id)initWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
