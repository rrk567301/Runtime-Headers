@class NSSet;

@interface SiriInference.VideoAppSelectionModelInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ AppUsage_7d;
    void /* unknown type, empty encoding */ EntityAbsoluteCount_2min;
    void /* unknown type, empty encoding */ EntityAbsoluteCount_10min;
    void /* unknown type, empty encoding */ EntityAbsoluteCount_1hr;
    void /* unknown type, empty encoding */ EntityAbsoluteCount_6hr;
    void /* unknown type, empty encoding */ EntityAbsoluteCount_1day;
    void /* unknown type, empty encoding */ EntityAbsoluteCount_7day;
    void /* unknown type, empty encoding */ raw_foregroundAppSignal;
    void /* unknown type, empty encoding */ LastForegroundApp;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
