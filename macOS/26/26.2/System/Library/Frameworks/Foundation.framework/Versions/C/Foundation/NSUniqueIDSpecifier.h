@interface NSUniqueIDSpecifier : NSScriptObjectSpecifier {
    id _uniqueID;
}

@property (copy) id uniqueID;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)_initFromRecord:(id)a0;
- (BOOL)_putKeyFormAndDataInRecord:(id)a0;
- (id)_simpleDescription;
- (unsigned long long)_specifiedIndexOfObjectInContainer:(id)a0;
- (id)_specifiedValueInContainer:(id)a0;
- (id)initWithContainerClassDescription:(id)a0 containerSpecifier:(id)a1 key:(id)a2;
- (id)initWithContainerClassDescription:(id)a0 containerSpecifier:(id)a1 key:(id)a2 uniqueID:(id)a3;

@end
