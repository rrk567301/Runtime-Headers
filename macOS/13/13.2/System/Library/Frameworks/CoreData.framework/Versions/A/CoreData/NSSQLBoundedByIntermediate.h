@class NSSQLEntity, NSExpression, NSAttributeDescription;

@interface NSSQLBoundedByIntermediate : NSSQLIntermediate {
    NSSQLEntity *_entity;
    NSAttributeDescription *_target;
    NSExpression *_bounds;
}

- (void)dealloc;
- (id)initWithWorkingEntity:(id)a0 target:(id)a1 bounds:(id)a2 scope:(id)a3;
- (id)generateSQLStringInContext:(id)a0;

@end
