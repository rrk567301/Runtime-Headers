@interface TIKeyboardBehaviorState : NSObject

@property (nonatomic) char hasInput;
@property (nonatomic) char hasAutocorrection;
@property (nonatomic) char hasCandidates;
@property (nonatomic) char hasCandidateSelected;
@property (nonatomic) char userSelectedCurrentCandidate;
@property (nonatomic) char hasNextPage;
@property (nonatomic) char showsExtendedList;
@property (nonatomic) char followsZhuyin;
@property (nonatomic) char spaceConfirmation;
@property (nonatomic) char showsCandidatesInLayout;
@property (nonatomic) char hardwareKeyboardMode;
@property (nonatomic) char followsIncompleteRomaji;
@property (nonatomic, getter=isContinuousPathUnderway) char continuousPathUnderway;

@end
