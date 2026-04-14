@class NSArray, ISDEntity;

@interface ISDRelationship : ISDProperty <NSCoding> {
    ISDEntity *_source;
    NSArray *_targets;
    NSArray *_inverseRelationships;
    NSArray *_anonymousInverseRelationshipNames;
}

+ (void)initialize;

- (id)sourceName;
- (id)initWithCoder:(id)a0;
- (BOOL)isToMany;
- (void)setTargets:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)source;
- (void)setSource:(id)a0;
- (int)deleteRule;
- (id)description;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)init;
- (void)setDeleteRule:(int)a0;
- (id)targets;
- (void)dealloc;
- (int)ordering;
- (void)setOrdering:(int)a0;
- (BOOL)isRelationship;
- (id)anonymousInverseRelationshipNames;
- (id)inverseRelationships;
- (BOOL)isCompatibleExtensionOf:(id)a0;
- (BOOL)morphInToObject:(id)a0;
- (void)setAnonymousInverseRelationshipNames:(id)a0;
- (void)setInverseRelationships:(id)a0;
- (void)setToMany:(BOOL)a0;

@end
