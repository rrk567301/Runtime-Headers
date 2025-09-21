@interface OKActionTransition : OKAction <NSSecureCoding, OKActionTransitionExports>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long target;
@property (readonly, nonatomic) float progress;

+ (void)setupJavascriptContext:(id)a0;
+ (id)transitionWithState:(unsigned long long)a0 target:(unsigned long long)a1 progress:(float)a2;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
