@class NSMutableDictionary;

@interface PDAnimateEffectBehavior : PDAnimateBehavior {
    BOOL mHasTransition;
    int mTransition;
}

@property (retain, nonatomic) NSMutableDictionary *propertyMap;

- (void)setTransition:(int)a0;
- (BOOL)hasProperties;
- (void).cxx_destruct;
- (int)transition;
- (id)init;
- (BOOL)hasTransition;

@end
