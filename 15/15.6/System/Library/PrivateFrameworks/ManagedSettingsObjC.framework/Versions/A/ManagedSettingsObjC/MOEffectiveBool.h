@interface MOEffectiveBool : NSObject

@property (readonly) char value;
@property (readonly) char defaultValue;

- (id)initWithValue:(char)a0 defaultValue:(char)a1;

@end
