@class NSString;
@protocol STRestrictionsSelectedValueProviderProtocol;

@interface STRestrictionsToPresetMappingViewModel : NSObject <STRestrictionsToPresetMappingViewModelProtocol>

@property (retain) id<STRestrictionsSelectedValueProviderProtocol> selectedValueProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)boolPresetKeys;
+ (id)presetKeys;

- (void).cxx_destruct;
- (id)initWithRestrictionsDataSource:(id)a0;
- (id)_presetForValuesByRestriction:(id)a0;
- (id)_restrictionsWithValuesByRestriction:(id)a0 presetKeys:(id)a1;
- (id)initWithSelectedValueProvider:(id)a0;
- (void)loadPresetMatchingCurrentRestrictionsWithCompletionHandler:(id /* block */)a0;

@end
