@class NSError;

@interface ASDPromiseResult : NSObject

@property (readonly) NSError *error;
@property (readonly) id value;

+ (id)resultWithValue:(id)a0;
+ (id)resultWithError:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
