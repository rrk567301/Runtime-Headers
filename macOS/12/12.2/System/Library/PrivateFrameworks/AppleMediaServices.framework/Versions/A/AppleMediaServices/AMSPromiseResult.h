@class NSError;

@interface AMSPromiseResult : NSObject

@property (readonly, copy) NSError *error;
@property (readonly) id result;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0 error:(id)a1;

@end
