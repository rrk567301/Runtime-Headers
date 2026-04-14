@class NSSet;

@interface SiriVideoIntents.IntDictionaryFeatureProvider : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ values;
    void /* function */ featureNames;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
