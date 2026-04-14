@interface MTL4CounterHeapDescriptor : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long count;

- (unsigned long long)hash;
- (void)setEntryCount:(unsigned long long)a0;
- (void)reset;
- (unsigned long long)entryCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
