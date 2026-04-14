@class NSMutableArray;

@interface MPActionGroup : MPAction <MPActionSupport, NSSecureCoding> {
    NSMutableArray *_actions;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)actionGroup;

- (void)setAction:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAction:(id)a0;
- (id)actions;
- (void)removeAllActions;
- (id)init;
- (void)dealloc;
- (void)addActions:(id)a0;
- (unsigned long long)numberOfActions;
- (void)configureTarget;
- (void)configureAction:(id)a0 atIndex:(long long)a1;
- (void)copyActions:(id)a0;
- (void)insertAction:(id)a0 atIndex:(long long)a1;
- (void)insertActions:(id)a0 atIndex:(long long)a1;
- (void)removeActionsAtIndices:(id)a0;

@end
