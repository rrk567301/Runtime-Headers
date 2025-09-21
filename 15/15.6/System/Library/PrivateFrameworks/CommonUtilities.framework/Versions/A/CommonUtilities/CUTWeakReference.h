@interface CUTWeakReference : NSObject

@property (weak, nonatomic) id object;
@property (nonatomic) unsigned long long objectAddress;

+ (id)weakRefWithObject:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;

@end
