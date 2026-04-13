@class NSString;

@interface UAShortcutFeature : NSObject

@property (copy, nonatomic) NSString *localizedName;
@property (nonatomic) BOOL currentFeatureState;
@property (nonatomic) BOOL userInterfaceEnabled;
@property (readonly, nonatomic) BOOL _allowedToBeShown;
@property BOOL _needToSyncSystemStatus;
@property (readonly, nonatomic) unsigned long long _categoryID;
@property (copy) NSString *_featureName;
@property (nonatomic) unsigned long long _featureID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) double symbolFontSize;
@property (readonly, nonatomic) double symbolFontWeight;
@property (readonly, copy, nonatomic) NSString *keyboardShortcut;

+ (id)_createFeatureWithFeatureName:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_init;
- (void)_syncSystemStatus;
- (BOOL)_allowedOutsideLoginWindowSession;
- (BOOL)_getStateFromSystem;
- (BOOL)_isForcedState;
- (void)_applyStateToSystem:(BOOL)a0;
- (void)_syncSystemStatusIfNeeded;
- (void)setDesiredFeatureState:(BOOL)a0;

@end
