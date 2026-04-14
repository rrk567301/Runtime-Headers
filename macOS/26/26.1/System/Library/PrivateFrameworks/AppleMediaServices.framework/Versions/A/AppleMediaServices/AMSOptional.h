@interface AMSOptional : NSObject

@property (readonly) id value;

+ (id)optionalWithNil;
+ (id)optionalWithValue:(id)a0;

- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
