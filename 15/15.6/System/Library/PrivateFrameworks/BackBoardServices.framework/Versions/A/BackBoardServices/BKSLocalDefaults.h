@class NSArray, NSDictionary, NSData, NSString;

@interface BKSLocalDefaults : BSAbstractDefaultDomain

@property (nonatomic) char ignoreAccelerometerAndOrientationEvents;
@property (nonatomic, getter=isALSEnabled) char ALSEnabled;
@property (nonatomic) long long ALSEpoch;
@property (retain, nonatomic) NSDictionary *ALSUserPreferences;
@property (nonatomic) float ALSDelayOnUnlock;
@property (nonatomic) int brightnessCurve;
@property (nonatomic) char ignoreTetheringPreferences;
@property (nonatomic, getter=isDitheringEnabled) char ditheringEnabled;
@property (nonatomic) char simulatePhoneButton;
@property (nonatomic, getter=isDigitizerSignpostsEnabled) char digitizerSignpostsEnabled;
@property (nonatomic) char digitizerVisualizeTouches;
@property (nonatomic) char digitizerVisualizeHitTestRegions;
@property (nonatomic) NSArray *digitizerServicePersistentProperties;
@property (nonatomic) char showBuildNumber;
@property (nonatomic, getter=isEventBufferingEnabled) char eventBufferingEnabled;
@property (nonatomic, getter=isSqueezeForSystemShortcutEnabled) char squeezeForSystemShortcutEnabled;
@property (nonatomic) char visualizeMousePointer;
@property (nonatomic) unsigned int pointerRegionArrangementEdge;
@property (retain, nonatomic) NSArray *mouseInterpolation;
@property (retain, nonatomic) NSData *globalMouseDevicePreferences;
@property (weak, nonatomic) NSArray *loggingTypesEnabled;
@property (weak, nonatomic) NSString *forceMirroredOrientation;
@property (nonatomic) char hideAppleLogoOnLaunch;
@property (nonatomic, getter=isSteveNoteRotationEnabled) char steveNoteRotationEnabled;
@property (nonatomic) char disableCloneMirroring;
@property (nonatomic) char disableCAOverscan;
@property (nonatomic) char disableCAYUV;
@property (nonatomic) char disableCAScaling;
@property (nonatomic, getter=isSteveNoteOverscanEnabled) char steveNoteOverscanEnabled;
@property (nonatomic) char forceCloneMirroring;
@property (nonatomic) char disableExtendedDisplayByDefault;
@property (nonatomic) char allowWirelessExtendedDisplay;
@property (nonatomic) char disableStudyLogBTKeyboardEventLogging;
@property (nonatomic) char disableStudyLogBTKeyboardEventRedirection;
@property (nonatomic) char disableStudyLogVolumeKeyLogging;
@property (nonatomic) char disableStudyLogHomeButtonLogging;
@property (nonatomic) char disableStudyLogButtonLogging;
@property (nonatomic) char disableStudyLogCameraKeyLogging;
@property (nonatomic) char disableStudyLogPowerButtonLogging;
@property (nonatomic) char disableStudyLogAccelerometerLogging;
@property (nonatomic) char disableStudyLogALSLogging;
@property (nonatomic) char disableStudyLogGyroLogging;
@property (retain, nonatomic) NSDictionary *keyboardTypeRemap;

- (id)init;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)_bindAndRegisterDefaults;
- (void)migrateDefaultsIfNecessary;
- (id)valueForKey:(id)a0 defaultValueProvider:(id /* block */)a1;

@end
