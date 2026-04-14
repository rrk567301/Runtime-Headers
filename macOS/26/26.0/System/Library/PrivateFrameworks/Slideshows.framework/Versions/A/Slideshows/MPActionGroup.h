@class NSMutableArray;

@interface MPActionGroup : MPAction <MPActionSupport, NSSecureCoding> {
    NSMutableArray *_actions;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)actionGroup;

- (void)setAction:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllActions;
- (void)encodeWithCoder:(id)a0;
- (void)addAction:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)actions;
- (void)addActions:(id)a0;
- (unsigned long long)numberOfActions;
- (void)configureTarget;
- (void)configureAction:(id)a0 atIndex:(long long)a1;
- (void)copyActions:(id)a0;
- (void)insertAction:(id)a0 atIndex:(long long)a1;
- (void)insertActions:(id)a0 atIndex:(long long)a1;
- (void)removeActionsAtIndices:(id)a0;

@end
