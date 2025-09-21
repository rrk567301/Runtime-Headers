@class NSArray, ISDEntity;

@interface ISDRelationship : ISDProperty <NSCoding> {
    ISDEntity *_source;
    NSArray *_targets;
    NSArray *_inverseRelationships;
    NSArray *_anonymousInverseRelationshipNames;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)ordering;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)setOrdering:(int)a0;
- (id)source;
- (void)setSource:(id)a0;
- (int)deleteRule;
- (char)isToMany;
- (void)setDeleteRule:(int)a0;
- (id)sourceName;
- (void)setTargets:(id)a0;
- (char)isRelationship;
- (id)targets;
- (id)anonymousInverseRelationshipNames;
- (id)inverseRelationships;
- (char)isCompatibleExtensionOf:(id)a0;
- (char)morphInToObject:(id)a0;
- (void)setAnonymousInverseRelationshipNames:(id)a0;
- (void)setInverseRelationships:(id)a0;
- (void)setToMany:(char)a0;

@end
