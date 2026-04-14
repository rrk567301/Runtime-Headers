@class NSString, ISDFileReference, NSArray;

@interface ISDSchema : ISDDataObject <NSCoding> {
    NSString *_name;
    ISDFileReference *_bundleRef;
    ISDFileReference *_descriptionFile;
    NSArray *_dataClasses;
    NSArray *_entityComponents;
    NSString *_validatorClassName;
    NSString *_conflictResolverClassName;
    NSString *_uiHelperClassName;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bundle;
- (id)dataClasses;
- (id)dataClassWithName:(id)a0;
- (id)descriptionFile;
- (void)setDescriptionFile:(id)a0;
- (id)entityComponentWithExtensionName:(id)a0 entityName:(id)a1;
- (id)entityComponents;
- (id)bundleRef;
- (BOOL)morphInToObject:(id)a0;
- (void)setDataClasses:(id)a0;
- (void)setEntityComponents:(id)a0;
- (id)uiHelperClassName;
- (id)initWithName:(id)a0 bundleRef:(id)a1;
- (id)anchorChildren;
- (void)setBundleRef:(id)a0;
- (id)validatorClassName;
- (void)setValidatorClassName:(id)a0;
- (id)conflictResolverClassName;
- (void)setConflictResolverClassName:(id)a0;
- (id)conflictUIHelperClassName;
- (void)setUIHelperClassName:(id)a0;

@end
