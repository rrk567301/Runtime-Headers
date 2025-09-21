@interface TDThemeConstant : NSManagedObject {
    int _identifier;
}

- (unsigned int)identifier;
- (id)debugDescription;
- (id)displayName;
- (void)setDisplayName:(id)a0;
- (void)setIdentifier:(unsigned int)a0;
- (id)constantName;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)a0;
- (void)setConstantName:(id)a0;

@end
