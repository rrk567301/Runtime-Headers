@interface SKWeakReference : NSObject

@property (weak, nonatomic) id object;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;

@end
