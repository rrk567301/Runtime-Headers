@class NSSQLForeignKey, NSSQLForeignEntityKey, NSSQLForeignOrderKey;

@interface NSSQLToOne : NSSQLRelationship {
    NSSQLForeignKey *_foreignKey;
    NSSQLForeignEntityKey *_foreignEntityKey;
    NSSQLForeignOrderKey *_foreignOrderKey;
    BOOL _isVirtual;
}

- (unsigned int)slot;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (void)_setForeignOrderKey:(id)a0;
- (id)description;
- (id)initWithEntity:(id)a0 inverseToMany:(id)a1;
- (id)initForReadOnlyFetchWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)foreignKey;
- (void)dealloc;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)columnName;

@end
