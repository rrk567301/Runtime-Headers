@class WBSIgnoredSiriSuggestedSitesController, WBSSiriIntelligenceDonor;

@interface WBSProfileDataManager : NSObject

@property (readonly, nonatomic) WBSSiriIntelligenceDonor *siriIntelligenceDonor;
@property (readonly, nonatomic) WBSIgnoredSiriSuggestedSitesController *ignoredSiriSuggestedSitesController;

+ (id)diskOnlyProfileDataManager;

- (id)init;
- (void).cxx_destruct;
- (void)didRemoveProfile:(id)a0;
- (void)didRemoveProfileWithServerID:(id)a0 profileIdentifier:(id)a1;
- (void)ensureProfileDirectoriesExistForProfileWithServerID:(id)a0 profileIdentifier:(id)a1;
- (id)initWithSiriIntelligenceDonor:(id)a0 ignoredSiriSuggestedSitesController:(id)a1;

@end
