@class NSMutableDictionary;

@interface PDAnimateEffectBehavior : PDAnimateBehavior {
    BOOL mHasTransition;
    int mTransition;
}

@property (retain, nonatomic) NSMutableDictionary *propertyMap;

- (int)transition;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasProperties;
- (void)setTransition:(int)a0;
- (BOOL)hasTransition;

@end
