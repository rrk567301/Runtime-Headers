@class NSSet;

@interface KGSetWrapper : NSObject <NSCopying>

@property (readonly, nonatomic) NSSet *set;
@property (readonly, nonatomic) unsigned long long count;

- (unsigned long long)hash;
- (id)initWithSet:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArray:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
