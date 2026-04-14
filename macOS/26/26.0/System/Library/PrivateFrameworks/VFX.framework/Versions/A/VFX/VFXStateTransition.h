@class VFXState, VFXTimingFunction, NSString, NSMutableDictionary;

@interface VFXStateTransition : NSObject <VFXReferenceEnumerable, NSSecureCoding, NSCopying> {
    NSMutableDictionary *_overrides;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VFXState *from;
@property (retain, nonatomic) VFXState *to;
@property (nonatomic) double duration;
@property (nonatomic) double beginTime;
@property (retain, nonatomic) VFXTimingFunction *timingFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;
- (void)setTransitionOverride:(id)a0 forItem:(id)a1;
- (id)transitionOverrideForItem:(id)a0;

@end
