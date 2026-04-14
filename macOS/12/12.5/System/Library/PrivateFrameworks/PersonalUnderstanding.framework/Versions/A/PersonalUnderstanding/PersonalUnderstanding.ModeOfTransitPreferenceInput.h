@class NSSet;

@interface PersonalUnderstanding.ModeOfTransitPreferenceInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ transit_count_cycling;
    void /* unknown type, empty encoding */ transit_count_walking;
    void /* unknown type, empty encoding */ transit_count_driving;
    void /* unknown type, empty encoding */ transit_duration_cycling;
    void /* unknown type, empty encoding */ transit_duration_walking;
    void /* unknown type, empty encoding */ transit_duration_driving;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
