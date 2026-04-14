@class RBAnimation, NSArray;

@interface RBTransition : NSObject <NSCopying> {
    struct refcounted_ptr<RB::Transition> { struct Transition *_p; } _transition;
    BOOL _is_default;
}

@property (class, readonly, nonatomic) RBTransition *defaultTransition;

@property (nonatomic) unsigned int method;
@property (retain, nonatomic) RBAnimation *animation;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic, getter=isReplaceable) BOOL replaceable;
@property (readonly, copy, nonatomic) NSArray *effects;
@property (nonatomic) float addRemoveDuration;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addEffect:(id)a0;
- (id)init;

@end
