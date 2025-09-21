@class KNAnimationPluginMenu, NSString, NSArray, TSDBezierPathSource, KNTransitionAttributes, NSSet, TSUColor, KNAnimationInfo;

@interface KNTransition : TSPContainedObject <KNInspectableAnimation, TSKModel> {
    KNTransitionAttributes *_attributes;
}

@property (readonly, nonatomic) NSString *effect;
@property (readonly, nonatomic) char isMagicMove;
@property (readonly, nonatomic) char isMagicMoveBased;
@property (copy, nonatomic) KNTransitionAttributes *attributes;
@property (readonly, nonatomic) KNAnimationInfo *animationInfo;
@property (readonly, nonatomic) NSArray *localizedEventTriggerNames;
@property (readonly, nonatomic) KNAnimationPluginMenu *directionMenu;
@property (readonly, nonatomic) unsigned long long directionType;
@property (readonly, nonatomic) char supportsDirection;
@property (readonly, nonatomic) char supportsDuration;
@property (readonly, nonatomic) char supportsBounce;
@property (readonly, nonatomic) char supportsColor;
@property (readonly, nonatomic) char supportsTwist;
@property (readonly, nonatomic) char supportsTravelDistance;
@property (readonly, nonatomic) char supportsCustomEffectTimingCurve1;
@property (readonly, nonatomic) char supportsCustomEffectTimingCurve2;
@property (readonly, nonatomic) char supportsCustomEffectTimingCurve3;
@property (readonly, nonatomic) char hasAutomaticTrigger;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) char documentIsRTL;
@property (readonly, nonatomic) TSUColor *color;
@property (readonly, nonatomic) float customTwist;
@property (readonly, nonatomic) long long customMosaicSize;
@property (readonly, nonatomic) long long customMosaicType;
@property (readonly, nonatomic) char customBounce;
@property (readonly, nonatomic) char customMotionBlur;
@property (readonly, nonatomic) float customTravelDistance;
@property (readonly, nonatomic) long long customTimingCurve;
@property (readonly, nonatomic) long long randomNumberSeed;
@property (readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve1;
@property (readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve2;
@property (readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve3;
@property (readonly, nonatomic) NSString *customEffectTimingCurveThemeName1;
@property (readonly, nonatomic) NSString *customEffectTimingCurveThemeName2;
@property (readonly, nonatomic) NSString *customEffectTimingCurveThemeName3;
@property (readonly, nonatomic) char customMagicMoveFadeUnmatchedObjects;
@property (readonly, nonatomic) long long customTextDelivery;
@property (readonly, nonatomic) char isAutomaticTransition;
@property (readonly, nonatomic) NSSet *inspectableAttributes;
@property (readonly, nonatomic) char canEditAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributeKeyForBindingKeyPath:(id)a0;
+ (id)bindingKeyPathForAttributeKey:(id)a0;
+ (id)bindingMap;
+ (unsigned long long)directionTypeForEffect:(id)a0;
+ (char)hasDirectionOptionForEffect:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithOwner:(id)a0;
- (unsigned long long)p_keynoteVersionFromUnarchiver:(id)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1 owner:(id)a2;
- (id)initWithOwner:(id)a0 attributes:(id)a1;
- (char)p_supportsCustomEffectTimingCurveForLayoutStyles:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (char)supportsRandomNumberSeedInspection;
- (char)supportsTimingCurves;

@end
