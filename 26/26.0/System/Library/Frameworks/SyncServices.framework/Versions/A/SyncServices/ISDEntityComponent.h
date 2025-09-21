@class NSString, ISDEntity, NSArray;

@interface ISDEntityComponent : ISDDataObject <NSCoding> {
    NSString *_extensionName;
    ISDEntity *_entity;
    NSArray *_attributes;
    NSArray *_relationships;
}

- (void)setAttributes:(id)a0;
- (void)dealloc;
- (id)propertyWithName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)attributes;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)relationships;
- (id)extensionName;
- (void)setRelationships:(id)a0;
- (id)propertyNames;
- (void)_updatePropertiesFromComponent:(id)a0 forKey:(id)a1 didChange:(BOOL *)a2;
- (id)attributeWithName:(id)a0;
- (id)initWithExtensionName:(id)a0 entity:(id)a1;
- (BOOL)isCompatibleExtensionOf:(id)a0;
- (id)mainEntity;
- (id)mainEntityName;
- (BOOL)morphInToObject:(id)a0;
- (id)relationshipWithName:(id)a0;
- (void)setMainEntity:(id)a0;

@end
