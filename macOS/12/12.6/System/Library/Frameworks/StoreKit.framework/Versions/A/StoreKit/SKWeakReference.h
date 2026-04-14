@interface SKWeakReference : NSObject

@property (weak, nonatomic) id object;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;

@end
