@class NSArray, JIMCandidate, JIMSession;

@interface JIMCandidateWindowController : IMKCandidates

@property (weak, nonatomic) JIMSession *session;
@property (nonatomic) unsigned long long candidateWindowType;
@property (nonatomic) char visible;
@property (nonatomic) char temporarilyHidden;
@property (nonatomic) char nonUserInitiatedSortModeSwitch;
@property (retain, nonatomic) NSArray *defaultSelectionKeys;
@property (retain, nonatomic) JIMCandidate *selectedCandidate;

- (void).cxx_destruct;
- (void)reset;
- (char)isConversionCandidateWindow;
- (char)isPredictionCandidateWindow;
- (void)refreshCandidates;
- (void)setActivateState:(char)a0;

@end
