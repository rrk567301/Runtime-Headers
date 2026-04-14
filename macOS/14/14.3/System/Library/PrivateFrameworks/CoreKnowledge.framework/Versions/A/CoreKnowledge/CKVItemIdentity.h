@class NSNumber;

@interface CKVItemIdentity : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *contentHash;
@property (readonly, nonatomic) NSNumber *instanceHash;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentHash:(id)a0 instanceHash:(id)a1;

@end
