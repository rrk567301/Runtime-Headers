@class NSSQLEntity, NSPropertyDescription;

@interface NSSQLProperty : NSObject {
    NSPropertyDescription *_propertyDescription;
    NSSQLEntity *_entity;
    unsigned char _propertyType;
    unsigned char _sqlType;
    unsigned short _fetchIndex;
    unsigned short _slot;
    struct _sqlColumnFlags { unsigned char _allowAliasing : 1; unsigned char _unique : 1; unsigned char _constrained : 1; unsigned char _backedByTrigger : 1; unsigned char _isDerivedAttribute : 1; unsigned short _reservedFlags : 11; } _flags;
}

@property (nonatomic, getter=isConstrained) BOOL constrained;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)name;
- (id)entity;
- (BOOL)isToMany;
- (unsigned char)sqlType;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)columnName;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)propertyDescription;
- (unsigned char)propertyType;
- (unsigned int)slot;

@end
