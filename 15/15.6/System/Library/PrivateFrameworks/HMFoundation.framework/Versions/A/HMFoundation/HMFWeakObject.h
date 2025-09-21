@interface HMFWeakObject : HMFObject

@property (readonly, nonatomic) unsigned long long objectHash;
@property (readonly, weak) id object;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithWeakObject:(id)a0;

@end
