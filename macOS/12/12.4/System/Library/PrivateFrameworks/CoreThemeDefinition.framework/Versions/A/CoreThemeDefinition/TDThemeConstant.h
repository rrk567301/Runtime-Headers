@interface TDThemeConstant : NSManagedObject {
    int _identifier;
}

- (id)debugDescription;
- (unsigned int)identifier;
- (id)displayName;
- (void)setIdentifier:(unsigned int)a0;
- (void)setDisplayName:(id)a0;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)a0;
- (id)constantName;
- (void)setConstantName:(id)a0;

@end
