@class IMKCandidateData, IMKUICandidateTouchBarController, IMKUIWindowBasedCandidateController;

@interface IMKUICandidateTouchBarOnScreenBridge : NSObject <IMKCandidateControllerDelegate, IMKUIDelegate>

@property (readonly, nonatomic) IMKUIWindowBasedCandidateController *onscreenController;
@property (readonly, nonatomic) IMKUICandidateTouchBarController *touchBarController;
@property (readonly, nonatomic) BOOL onscreenCandidatesCorrespondToTouchBarCandidates;
@property (retain, nonatomic) IMKUIWindowBasedCandidateController *auxiliaryOnscreenController;
@property (nonatomic) Class auxiliaryOnscreenControllerClass;
@property (nonatomic) BOOL onscreenCandidatesReflectedInTouchBar;
@property (nonatomic) BOOL scrubbingInTouchBarUpdatesOnscreenCandidates;
@property (nonatomic) BOOL shouldRouteTouchBarSelectionEventsToInputController;
@property (retain, nonatomic) IMKCandidateData *secondaryCandidates;

+ (id)sharedBridge;

- (void)dealloc;
- (id)init;
- (id)candidateDataForController:(id)a0;
- (void)handleCandidateSelected:(id)a0 candidateController:(id)a1;
- (void)handleCandidateSelectionChanged:(id)a0 candidateController:(id)a1;
- (id)displayMethod;
- (id)sortingMethods;
- (void)scrubbedCandidate:(id)a0;
- (void)shouldUpdateForPressAndHold:(id)a0;
- (void)touchesEnded;
- (void)touchesEndedOutsideView;
- (id)textClient;
- (long long)windowType;
- (id)selectedCandidateKey:(id)a0;
- (id)candidatesForSortingMethod:(id)a0;
- (void)showAuxiliaryWindowIfNecessary;
- (void)closeAuxiliaryWindowController;
- (void)onscreenCandidateSelectionDidChange:(id)a0 committed:(BOOL)a1;
- (void)onscreenCandidatesDidReload:(id)a0;
- (void)onscreenCandidatesDidHide:(id)a0;

@end
