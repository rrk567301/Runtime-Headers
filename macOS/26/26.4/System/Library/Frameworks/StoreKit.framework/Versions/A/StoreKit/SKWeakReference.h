@interface SKWeakReference : NSObject

@property (weak, nonatomic) id object;

- (id)initWithObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
