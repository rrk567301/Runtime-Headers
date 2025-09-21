@interface SKWeakReference : NSObject

@property (weak, nonatomic) id object;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;

@end
