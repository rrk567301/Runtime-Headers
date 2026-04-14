@class NSString, NSMethodSignature;

@interface SBThunk : NSObject {
    NSString *_selector;
    NSMethodSignature *_signature;
}

+ (id)thunksForElement:(id)a0 inDocument:(id)a1;
+ (id)thunkWithElement:(id)a0 inDocument:(id)a1;

- (id)selector;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)signature;
- (void)invoke:(id)a0;
- (id)initWithElement:(id)a0 inDocument:(id)a1;

@end
