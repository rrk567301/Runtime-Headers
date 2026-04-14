@class NSView, IMKUICandidateTouchBarItemController, NSArray, IMKCandidateListDictionary, IMKUICandidateWindowController, NSValue, NSDictionary, IMKCandidate, NSString, IMKUICandidateWindowPositionController, IMKServer, IMKCandidates;
@protocol IMKCandidatesDelegate, IMKCandidatesSimulatorDelegate;

@interface IMKCandidatesPrivate : NSObject {
    IMKCandidate *_focusedCandidate;
    NSArray *_sortingModes;
}

@property (nonatomic) long long alignment;
@property (retain, nonatomic) NSDictionary *annotationAttributes;
@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) IMKUICandidateTouchBarItemController *candidateTouchBarController;
@property (retain, nonatomic) IMKUICandidateWindowController *candidateWindowController;
@property (retain, nonatomic) NSArray *candidates;
@property (retain, nonatomic) IMKCandidateListDictionary *candidateListDictionary;
@property (retain, nonatomic) NSValue *candidateWindowPosition;
@property (nonatomic) id<IMKCandidatesDelegate> delegate;
@property (nonatomic) BOOL dismissesAutomatically;
@property (retain, nonatomic) IMKCandidate *focusedCandidate;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSView *informationView;
@property (nonatomic) struct __TISInputSource { } *inputSource;
@property (copy, nonatomic) NSString *noCandidatesMessage;
@property (retain, nonatomic) NSDictionary *noCandidatesMessageAttributes;
@property (nonatomic) unsigned long long numberOfFixedSizeCandidates;
@property (nonatomic) unsigned long long panelType;
@property (nonatomic) IMKCandidates *parent;
@property (retain, nonatomic) IMKUICandidateWindowPositionController *positionController;
@property (nonatomic) BOOL presentsAutomatically;
@property (retain, nonatomic) NSArray *selectionKeys;
@property (nonatomic) struct __TISInputSource { } *selectionKeysKeyLayout;
@property (retain, nonatomic) IMKServer *server;
@property (nonatomic) id<IMKCandidatesSimulatorDelegate> simulatorDelegate;
@property (retain, nonatomic) NSArray *sortingModes;
@property (retain, nonatomic) NSDictionary *titleAttributes;

- (void)dealloc;
- (BOOL)isExpanded;
- (BOOL)forceNoIncrementalSearchPositioning;
- (void)setForceNoIncrementalSearchPositioning:(BOOL)a0;
- (void)didHideCandidates:(id)a0;
- (void)didUpdateVisibleCandidates:(id)a0;
- (id)visibleCandidates;
- (void)createInternalCandidateController;
- (id)itemLayoutForFontSize:(double)a0;
- (id)layoutTraitsForFontSize:(double)a0 alignment:(long long)a1 panelType:(unsigned long long)a2;
- (id)completeTitleAttributesWithFontSize:(double)a0;
- (id)completeAnnotationAttributesWithFontSize:(double)a0;
- (id)completeNoCandidatesMessageAttributesWithFontSize:(double)a0;
- (id)IMKCandidates;
- (id)selectionKeyTitlesFromKeyCodes:(id)a0;
- (void)candidateSelection:(id)a0 commit:(BOOL)a1;
- (void)didFinishInteracting:(id)a0;
- (id)initWithServer:(id)a0 panelType:(unsigned long long)a1;
- (void)updateAndShowCandidates;
- (id)attributedTitleFromDefinitionUnit:(id)a0;
- (struct __TISInputSource { } *)findUSKeyboardLayout;
- (void)didSelectCandidate:(id)a0 sender:(id)a1;
- (void)didCommitCandidate:(id)a0 sender:(id)a1;
- (void)didSelectSortingMode:(id)a0 sender:(id)a1;
- (struct CGSize { double x0; double x1; })preferredWindowSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })positionForWindowWithSize:(struct CGSize { double x0; double x1; })a0 sender:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrameForWindowWithSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)firstVisibleLineForSender:(id)a0;
- (id)selectedCandidateForSender:(id)a0 proposedCandidate:(id)a1;

@end
