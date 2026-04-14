@class NSString, AXKAlertWindowController, NSWindow;

@interface UAShortcutFeature : NSObject

@property (copy, nonatomic) NSString *localizedName;
@property (nonatomic) BOOL currentFeatureState;
@property (nonatomic) BOOL userInterfaceEnabled;
@property (readonly, nonatomic) BOOL _allowedToBeShown;
@property BOOL _needToSyncSystemStatus;
@property (readonly, nonatomic) unsigned long long _categoryID;
@property (retain, nonatomic) AXKAlertWindowController *_alertController;
@property (nonatomic) unsigned long long _featureID;
@property (copy, nonatomic) NSString *_featureName;
@property (weak, nonatomic) NSWindow *windowForSheets;
@property (nonatomic) BOOL runAlertModalIfNecessary;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) double symbolFontSize;
@property (readonly, nonatomic) double symbolFontWeight;
@property (readonly, copy, nonatomic) NSString *keyboardShortcut;

+ (id)_createFeatureWithFeatureName:(id)a0;

- (id)description;
- (id)_init;
- (void).cxx_destruct;
- (BOOL)_allowedOutsideLoginWindowSession;
- (void)_syncSystemStatus;
- (BOOL)_getStateFromSystem;
- (void)setDesiredFeatureState:(BOOL)a0;
- (BOOL)_enablementRequiresInteraction;
- (void)_enableSystemTranscriptionsWithOnboardingIfNeeded;
- (void)_applyStateToSystem:(BOOL)a0;
- (BOOL)_isForcedState;
- (void)_syncSystemStatusIfNeeded;

@end
