@class NSString, AXKAlertWindowController, NSWindow;

@interface UAShortcutFeature : NSObject

@property (copy, nonatomic) NSString *localizedName;
@property (nonatomic) char currentFeatureState;
@property (nonatomic) char userInterfaceEnabled;
@property (readonly, nonatomic) char _allowedToBeShown;
@property char _needToSyncSystemStatus;
@property (readonly, nonatomic) unsigned long long _categoryID;
@property (retain, nonatomic) AXKAlertWindowController *_alertController;
@property (nonatomic) unsigned long long _featureID;
@property (copy, nonatomic) NSString *_featureName;
@property (weak, nonatomic) NSWindow *windowForSheets;
@property (nonatomic) char runAlertModalIfNecessary;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) double symbolFontSize;
@property (readonly, nonatomic) double symbolFontWeight;
@property (readonly, copy, nonatomic) NSString *keyboardShortcut;

+ (id)_createFeatureWithFeatureName:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_init;
- (char)_allowedOutsideLoginWindowSession;
- (void)_applyStateToSystem:(char)a0;
- (void)_enableSystemTranscriptionsWithOnboardingIfNeeded;
- (char)_enablementRequiresInteraction;
- (char)_getStateFromSystem;
- (char)_isForcedState;
- (void)_syncSystemStatus;
- (void)_syncSystemStatusIfNeeded;
- (char)allowShowMouseKeysDialog;
- (void)setDesiredFeatureState:(char)a0;

@end
