@class PLLibraryServicesManager;

@interface PLFeatureAvailabilityProgressDelegate : NSObject <PLFeatureAvailabilityProgressDelegate> {
    PLLibraryServicesManager *_lsm;
}

- (id)initWithLibraryServicesManager:(id)a0;
- (void).cxx_destruct;
- (void)_featureAvailability:(id)a0 updateProgressForFeature:(id)a1;
- (void)featureAvailability:(id)a0 updateProgressForFeature:(id)a1;

@end
