@class NSSQLForeignKey, NSSQLForeignEntityKey, NSSQLForeignOrderKey;

@interface NSSQLToOne : NSSQLRelationship {
    NSSQLForeignKey *_foreignKey;
    NSSQLForeignEntityKey *_foreignEntityKey;
    NSSQLForeignOrderKey *_foreignOrderKey;
    BOOL _isVirtual;
}

- (unsigned int)slot;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)foreignKey;
- (id)initWithEntity:(id)a0 inverseToMany:(id)a1;
- (id)initForReadOnlyFetchWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)_setForeignOrderKey:(id)a0;
- (id)columnName;
- (id)description;
- (void)dealloc;

@end
