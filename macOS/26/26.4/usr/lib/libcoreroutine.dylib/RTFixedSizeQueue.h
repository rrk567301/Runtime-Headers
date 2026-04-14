@class NSMutableArray;

@interface RTFixedSizeQueue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSMutableArray *objects;
@property (readonly, nonatomic) unsigned long long capacity;

- (id)lastObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)enqueueObject:(id)a0;
- (id)firstObject;
- (void).cxx_destruct;
- (id)objectAtIndex:(long long)a0;
- (unsigned long long)count;
- (id)dequeueObject;
- (id)initWithCoder:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0 objects:(id)a1;

@end
