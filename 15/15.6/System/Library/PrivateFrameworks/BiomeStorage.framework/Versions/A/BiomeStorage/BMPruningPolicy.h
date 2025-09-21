@interface BMPruningPolicy : NSObject

@property (nonatomic) char pruneOnAccess;
@property (nonatomic) char filterByAgeOnRead;
@property (nonatomic) double maxAge;
@property (nonatomic) unsigned long long maxStreamSize;
@property (nonatomic) unsigned long long maxEventCount;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initPruneOnAccess:(char)a0 filterByAgeOnRead:(char)a1 maxAge:(double)a2 maxStreamSize:(unsigned long long)a3;
- (id)initPruneOnAccess:(char)a0 filterByAgeOnRead:(char)a1 maxAge:(double)a2 maxStreamSize:(unsigned long long)a3 maxEventCount:(unsigned long long)a4;

@end
