@interface MTL4CounterHeapDescriptor : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long count;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)entryCount;
- (void)reset;
- (void)setEntryCount:(unsigned long long)a0;
- (id)init;

@end
