@class NSString, VFXNode, VFXState;

@interface VFXStateItem : NSObject <VFXReferenceEnumerable, NSSecureCoding, NSCopying> {
    id _target;
    NSString *_keyPath;
    id _value;
    VFXNode *_parent;
    unsigned long long _index;
    NSString *_identifier;
    VFXState *_state;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long action;
@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) id value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)removeNode:(id)a0;
+ (id)insertChildNode:(id)a0 parent:(id)a1 atIndex:(unsigned long long)a2;
+ (id)addAnimation:(id)a0 to:(id)a1 keyPath:(id)a2;
+ (id)removeAnimationFrom:(id)a0 keyPath:(id)a1;
+ (id)setValue:(id)a0 to:(id)a1 keyPath:(id)a2;

- (void)setState:(id)a0;
- (unsigned long long)index;
- (void)setValue:(id)a0;
- (id)identifier;
- (id)parent;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)setTarget:(id)a0;
- (void)apply;
- (id)effectiveTarget;
- (id)makeReverseItem;
- (id)_makeReverseItem;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithAction:(long long)a0 target:(id)a1 keyPath:(id)a2 value:(id)a3 parent:(id)a4 index:(unsigned long long)a5;
- (BOOL)replaces:(id)a0;

@end
