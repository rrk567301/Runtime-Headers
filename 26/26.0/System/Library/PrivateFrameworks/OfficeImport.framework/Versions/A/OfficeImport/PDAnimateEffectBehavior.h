@class NSMutableDictionary;

@interface PDAnimateEffectBehavior : PDAnimateBehavior {
    BOOL mHasTransition;
    int mTransition;
}

@property (retain, nonatomic) NSMutableDictionary *propertyMap;

- (int)transition;
- (void)setTransition:(int)a0;
- (id)init;
- (BOOL)hasProperties;
- (void).cxx_destruct;
- (BOOL)hasTransition;

@end
