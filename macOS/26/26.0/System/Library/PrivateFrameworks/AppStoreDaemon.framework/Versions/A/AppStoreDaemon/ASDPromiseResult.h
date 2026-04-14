@class NSError;

@interface ASDPromiseResult : NSObject

@property (readonly) NSError *error;
@property (readonly) id value;

+ (id)resultWithValue:(id)a0;
+ (id)resultWithError:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
