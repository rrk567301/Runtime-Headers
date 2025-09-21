@class NSMutableDictionary;

@interface PDAnimateEffectBehavior : PDAnimateBehavior {
    char mHasTransition;
    int mTransition;
}

@property (retain, nonatomic) NSMutableDictionary *propertyMap;

- (id)init;
- (void).cxx_destruct;
- (int)transition;
- (char)hasTransition;
- (void)setTransition:(int)a0;
- (char)hasProperties;

@end
