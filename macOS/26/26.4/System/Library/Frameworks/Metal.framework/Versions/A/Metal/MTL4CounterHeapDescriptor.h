@interface MTL4CounterHeapDescriptor : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long count;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setEntryCount:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)reset;
- (id)init;
- (unsigned long long)entryCount;

@end
