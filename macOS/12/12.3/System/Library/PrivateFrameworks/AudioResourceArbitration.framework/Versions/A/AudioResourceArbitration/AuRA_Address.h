@interface AuRA_Address : NSObject <NSCopying>

@property (nonatomic) unsigned int selector;
@property (nonatomic) unsigned int scope;
@property (nonatomic) unsigned int element;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;

@end
