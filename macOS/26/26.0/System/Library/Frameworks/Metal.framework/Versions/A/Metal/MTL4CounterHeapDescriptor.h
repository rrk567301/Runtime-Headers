@interface MTL4CounterHeapDescriptor : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long count;

- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)entryCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setEntryCount:(unsigned long long)a0;

@end
