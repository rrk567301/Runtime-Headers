@interface HMFWeakObject : HMFObject

@property (readonly, nonatomic) unsigned long long objectHash;
@property (readonly, weak) id object;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithWeakObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
