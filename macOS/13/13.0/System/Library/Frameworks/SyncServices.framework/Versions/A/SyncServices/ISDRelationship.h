@class NSArray, ISDEntity;

@interface ISDRelationship : ISDProperty <NSCoding> {
    ISDEntity *_source;
    NSArray *_targets;
    NSArray *_inverseRelationships;
    NSArray *_anonymousInverseRelationshipNames;
}

+ (void)initialize;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)source;
- (int)ordering;
- (void)setOrdering:(int)a0;
- (void)setSource:(id)a0;
- (int)deleteRule;
- (BOOL)isToMany;
- (void)setDeleteRule:(int)a0;
- (id)sourceName;
- (void)setTargets:(id)a0;
- (BOOL)isRelationship;
- (id)targets;
- (BOOL)morphInToObject:(id)a0;
- (BOOL)isCompatibleExtensionOf:(id)a0;
- (id)inverseRelationships;
- (void)setInverseRelationships:(id)a0;
- (id)anonymousInverseRelationshipNames;
- (void)setAnonymousInverseRelationshipNames:(id)a0;
- (void)setToMany:(BOOL)a0;

@end
