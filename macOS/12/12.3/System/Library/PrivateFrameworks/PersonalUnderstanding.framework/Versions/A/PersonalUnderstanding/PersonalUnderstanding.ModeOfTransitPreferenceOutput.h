@class NSSet;

@interface PersonalUnderstanding.ModeOfTransitPreferenceOutput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_walking_score;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cycling_score;
    void /* unknown type, empty encoding */ $__lazy_storage_$_driving_score;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
