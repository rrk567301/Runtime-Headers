@interface SKWeakReference : NSObject

@property (weak, nonatomic) id object;

- (unsigned long long)hash;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
