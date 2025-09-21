@class NSDictionary, NSSet, ATXSuggestedPagesTunableConstants;

@interface ATXModeFaceSuggestionGenerator : NSObject <ATXSuggestedSpacesEnvironment>

@property (readonly, nonatomic) NSDictionary *appLaunchCounts;
@property (readonly, nonatomic) NSSet *suggestedApps;
@property (readonly, nonatomic) ATXSuggestedPagesTunableConstants *tunableConstants;

- (id)generateFacesFromDescriptors:(id)a0;
- (id)_facesForModeType:(long long)a0 modeUUID:(id)a1 allDescriptors:(id)a2;
- (void)generateAndCacheFacesFromDescriptors:(id)a0;
- (id)init;
- (id)_firstPhotosDescriptorMatchingSubtype:(long long)a0 allDescriptors:(id)a1;
- (id)_firstDescriptorWithExtension:(id)a0 identifier:(id)a1 allDescriptors:(id)a2;
- (id)_posterCandidatesForModeType:(long long)a0 allDescriptors:(id)a1;
- (id)_firstDescriptorWithExtension:(id)a0 focus:(long long)a1 allDescriptors:(id)a2;
- (id)facesForMode:(id)a0 allDescriptors:(id)a1;
- (void).cxx_destruct;

@end
