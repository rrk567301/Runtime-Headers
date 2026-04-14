@interface AuRA_Address : NSObject <NSCopying>

@property (nonatomic) unsigned int selector;
@property (nonatomic) unsigned int scope;
@property (nonatomic) unsigned int element;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
