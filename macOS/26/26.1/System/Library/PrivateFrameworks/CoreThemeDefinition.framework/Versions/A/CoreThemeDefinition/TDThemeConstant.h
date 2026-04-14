@interface TDThemeConstant : NSManagedObject {
    int _identifier;
}

- (id)displayName;
- (void)setIdentifier:(unsigned int)a0;
- (unsigned int)identifier;
- (void)setDisplayName:(id)a0;
- (id)debugDescription;
- (id)constantName;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)a0;
- (void)setConstantName:(id)a0;

@end
