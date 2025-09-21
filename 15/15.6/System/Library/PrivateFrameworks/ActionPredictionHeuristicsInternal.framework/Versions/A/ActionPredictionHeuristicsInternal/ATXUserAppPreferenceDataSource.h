@class ATXHeuristicDevice;

@interface ATXUserAppPreferenceDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (char)appSupportsParameterCombination:(id)a0 forIntent:(id)a1 forBundleId:(id)a2;
- (char)parametersExistInValidCombinationsForParameters:(id)a0 andValidCombinations:(id)a1;
- (void)preferredAppForIntentName:(id)a0 andParameterCombination:(id)a1 callback:(id /* block */)a2;
- (void)preferredAppForIntentName:(id)a0 andParameterCombination:(id)a1 skipAppSchemaCheck:(char)a2 callback:(id /* block */)a3;

@end
