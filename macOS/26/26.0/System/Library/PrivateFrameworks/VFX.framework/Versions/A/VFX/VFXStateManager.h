@class VFXState, NSMutableArray, NSString;

@interface VFXStateManager : NSObject <VFXReferenceEnumerable, VFXCopyingRemappable, NSSecureCoding> {
    VFXState *_activeState;
    VFXState *_reverseActiveState;
    id _owner;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *states;
@property (retain, nonatomic) NSMutableArray *transitions;
@property (retain, nonatomic) VFXState *activeState;
@property (nonatomic) BOOL transitionsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)beginTransition:(id)a0;
+ (void)commitTransition:(id)a0;

- (void)setOwner:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)stateWithName:(id)a0;
- (id)init;
- (id)owner;
- (id)stateTransitions;
- (id)initWithCoder:(id)a0;
- (void)addState:(id)a0;
- (void)removeState:(id)a0;
- (void)addReverseItem:(id)a0;
- (void)addStateTransition:(id)a0;
- (void)baseState:(id)a0 on:(id)a1;
- (void)copyTo:(id)a0 withContext:(id)a1;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;
- (void)removeReverseItem:(id)a0;
- (void)removeStateTransition:(id)a0;
- (id)transitionFrom:(id)a0 to:(id)a1;

@end
