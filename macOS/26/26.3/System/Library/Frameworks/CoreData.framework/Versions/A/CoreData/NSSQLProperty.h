@class NSSQLEntity, NSPropertyDescription;

@interface NSSQLProperty : NSObject {
    NSPropertyDescription *_propertyDescription;
    NSSQLEntity *_entity;
    unsigned char _propertyType;
    unsigned char _sqlType;
    unsigned short _fetchIndex;
    unsigned short _slot;
    struct _sqlColumnFlags { unsigned char _allowAliasing : 1; unsigned char _unique : 1; unsigned char _constrained : 1; unsigned char _backedByTrigger : 1; unsigned char _isDerivedAttribute : 1; unsigned char _isNestedColumn : 1; unsigned short _reservedFlags : 10; } _flags;
}

@property (nonatomic, getter=isConstrained) BOOL constrained;

- (unsigned int)slot;
- (unsigned char)propertyType;
- (id)entity;
- (BOOL)isToMany;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)propertyDescription;
- (id)description;
- (unsigned char)sqlType;
- (id)name;
- (void)dealloc;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)columnName;
- (BOOL)isEqual:(id)a0;

@end
