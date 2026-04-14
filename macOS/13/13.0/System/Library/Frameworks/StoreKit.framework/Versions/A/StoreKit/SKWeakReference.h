@interface SKWeakReference : NSObject

@property (weak, nonatomic) id object;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;

@end
