@class NSArray, NSView, NSString, GKReachability;
@protocol GKNicknameControllerMacDelegate, GKNicknameSuggestionViewProtocol;

@interface GKNicknameControllerMac : NSObject <GKNicknameTextFieldDelegate>

@property (retain, nonatomic) GKReachability *reachability;
@property (retain, nonatomic) NSArray *suggestedNicknames;
@property (retain, nonatomic) NSView<GKNicknameSuggestionViewProtocol> *suggestionsView;
@property (nonatomic) char isSettingsView;
@property (retain, nonatomic) NSString *defaultNickname;
@property (nonatomic) char shouldShakeTextFieldOnError;
@property (weak) id<GKNicknameControllerMacDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setNickname:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)reachabilityDidChange:(id)a0;
- (void)cancelOperation;
- (void)addSuggestionsSubviewTo:(id)a0;
- (void)disableNicknameEditing;
- (void)displayNicknameSuggestions;
- (void)hideSuggestionNicknames:(char)a0;
- (id)initWithSettingsFlag:(char)a0;
- (id)initWithSettingsFlag:(char)a0 nicknameSuggestionsView:(id)a1;
- (void)loadNicknameSuggestions:(id /* block */)a0;
- (void)nicknameWillBecomeFirstResponder;
- (void)populateSuggestedNickname;
- (void)saveNickname:(id)a0;
- (void)shakeNicknameTextFieldWithCompletionBlock:(id /* block */)a0;
- (void)updateNicknameEditingSection;
- (void)validateNickname;

@end
