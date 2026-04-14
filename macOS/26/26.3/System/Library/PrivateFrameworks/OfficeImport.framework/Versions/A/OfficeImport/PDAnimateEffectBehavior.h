@class NSMutableDictionary;

@interface PDAnimateEffectBehavior : PDAnimateBehavior {
    BOOL mHasTransition;
    int mTransition;
}

@property (retain, nonatomic) NSMutableDictionary *propertyMap;

- (BOOL)hasProperties;
- (void)setTransition:(int)a0;
- (int)transition;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasTransition;

@end
