@class NSMutableDictionary;

@interface PDAnimateEffectBehavior : PDAnimateBehavior {
    BOOL mHasTransition;
    int mTransition;
}

@property (retain, nonatomic) NSMutableDictionary *propertyMap;

- (void)setTransition:(int)a0;
- (int)transition;
- (BOOL)hasProperties;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasTransition;

@end
