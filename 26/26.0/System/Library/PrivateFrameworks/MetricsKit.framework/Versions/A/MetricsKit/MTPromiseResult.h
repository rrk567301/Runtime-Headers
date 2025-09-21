@class NSError;

@interface MTPromiseResult : NSObject

@property (readonly, copy) NSError *error;
@property (readonly) id result;

- (id)initWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
