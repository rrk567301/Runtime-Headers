@interface OKActionSwipe : OKAction <OKActionSwipeExports, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long direction;

+ (id)swipeActionWithLocation:(struct CGPoint { double x0; double x1; })a0 direction:(unsigned long long)a1 touchCount:(unsigned long long)a2;
+ (void)setupJavascriptContext:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
