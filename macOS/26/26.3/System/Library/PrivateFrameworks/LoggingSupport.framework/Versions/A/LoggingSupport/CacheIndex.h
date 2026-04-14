@interface CacheIndex : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned short fileIndex;
@property (readonly, nonatomic) long long chunk_offset;

- (id)initWithCDHash:(unsigned short)a0 identifier:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToCacheIndex:(id)a0;

@end
