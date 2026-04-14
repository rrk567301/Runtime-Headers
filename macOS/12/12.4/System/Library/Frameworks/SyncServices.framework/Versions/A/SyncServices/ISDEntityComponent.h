@class NSString, ISDEntity, NSArray;

@interface ISDEntityComponent : ISDDataObject <NSCoding> {
    NSString *_extensionName;
    ISDEntity *_entity;
    NSArray *_attributes;
    NSArray *_relationships;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAttributes:(id)a0;
- (id)attributes;
- (id)relationships;
- (void)setRelationships:(id)a0;
- (id)extensionName;
- (id)propertyNames;
- (id)mainEntity;
- (BOOL)morphInToObject:(id)a0;
- (id)initWithExtensionName:(id)a0 entity:(id)a1;
- (BOOL)isCompatibleExtensionOf:(id)a0;
- (id)relationshipWithName:(id)a0;
- (id)propertyWithName:(id)a0;
- (id)attributeWithName:(id)a0;
- (void)_updatePropertiesFromComponent:(id)a0 forKey:(id)a1 didChange:(BOOL *)a2;
- (void)setMainEntity:(id)a0;
- (id)mainEntityName;

@end
