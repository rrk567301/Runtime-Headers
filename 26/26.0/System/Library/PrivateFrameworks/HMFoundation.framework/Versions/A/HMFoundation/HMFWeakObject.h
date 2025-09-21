@interface HMFWeakObject : HMFObject

@property (readonly, nonatomic) unsigned long long objectHash;
@property (readonly, weak) id object;

- (id)init;
- (id)initWithWeakObject:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
