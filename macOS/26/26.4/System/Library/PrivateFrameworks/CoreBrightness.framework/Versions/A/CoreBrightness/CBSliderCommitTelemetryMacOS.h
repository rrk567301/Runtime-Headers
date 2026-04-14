@class NSString, CBDisplayContainerSKL, NSObject;
@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_source;

@interface CBSliderCommitTelemetryMacOS : CBModule <CBContainerModuleProtocol> {
    CBDisplayContainerSKL *_displayContainer;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    struct array<CBSliderCommitInfo, 100UL> { struct CBSliderCommitInfo { long long timestamp; long long localTimestamp; int trustedLux; float frontLux; float rearLux; BOOL rearLuxInUse; float nits; float slider; float apce; float delayedAPCE; int delayedAPCEStatus; BOOL autobrightnessEnabled; BOOL ecoModeEnabled; float ecoModeFactor; struct CBAABParams { float e0a; float e0b; float e1; float e2; float l0a; float l0b; float l1; float l2; float thirdSlope; int curveType; } aabParams; struct CBAABParams { float e0a; float e0b; float e1; float e2; float l0a; float l0b; float l1; float l2; float thirdSlope; int curveType; } aabAlternativeParams; BOOL aabParamsUpdateOnly; int aabParamsUpdateReason; float nitsDelta; float nitsDeltaAlternative; long long restoreTimeTarget; float inactiveLength; long long inactiveStart; BOOL cpmsMitigationLimitingBrightness; BOOL touchMitigationTriggered; BOOL proxMitigationTriggered; float auroraFactor; float edrHeadroom; float colorAdaptationStrength; int colorAdaptationMode; BOOL darkThemeApplied; BOOL landscapeOrientation; BOOL aabMultiModeEnabled; int aabMode; float edrHeadroomRequest; } __elems_[100]; } _entryBuffer;
    unsigned long long _bufferIndex;
    unsigned long long _bufferEntriesFilled;
    NSObject<OS_os_log> *_bufferLogHandle;
    long long _telemetryPublishDelaySeconds;
    NSObject<OS_dispatch_source> *_telemetryPublishDelayTimer;
    BOOL _initialAABStateUpdateArrived;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stop;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)start;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (void)dealloc;
- (void)cancelTelemetryPublishDelayTimer;
- (void)fillEntry:(struct CBSliderCommitInfo { long long x0; long long x1; int x2; float x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; int x10; BOOL x11; BOOL x12; float x13; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; int x9; } x14; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; int x9; } x15; BOOL x16; int x17; float x18; float x19; long long x20; float x21; long long x22; BOOL x23; BOOL x24; BOOL x25; float x26; float x27; float x28; int x29; BOOL x30; BOOL x31; BOOL x32; int x33; float x34; } *)a0 withTimestamp:(long long)a1 andAABUpdateReason:(int)a2;
- (struct CBSliderCommitInfo { long long x0; long long x1; int x2; float x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; int x10; BOOL x11; BOOL x12; float x13; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; int x9; } x14; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; int x9; } x15; BOOL x16; int x17; float x18; float x19; long long x20; float x21; long long x22; BOOL x23; BOOL x24; BOOL x25; float x26; float x27; float x28; int x29; BOOL x30; BOOL x31; BOOL x32; int x33; float x34; } *)getLastFilledEntry;
- (struct CBSliderCommitInfo { long long x0; long long x1; int x2; float x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; int x10; BOOL x11; BOOL x12; float x13; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; int x9; } x14; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; int x9; } x15; BOOL x16; int x17; float x18; float x19; long long x20; float x21; long long x22; BOOL x23; BOOL x24; BOOL x25; float x26; float x27; float x28; int x29; BOOL x30; BOOL x31; BOOL x32; int x33; float x34; } *)getNextEntryAndAdvanceBufferIndex;
- (id)initWithQueue:(id)a0 andDisplayContainer:(id)a1 andVariant:(long long)a2;
- (void)logAllFilledEntries;
- (void)reportCommit:(struct CBSliderCommitInfo { long long x0; long long x1; int x2; float x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; int x10; BOOL x11; BOOL x12; float x13; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; int x9; } x14; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; int x9; } x15; BOOL x16; int x17; float x18; float x19; long long x20; float x21; long long x22; BOOL x23; BOOL x24; BOOL x25; float x26; float x27; float x28; int x29; BOOL x30; BOOL x31; BOOL x32; int x33; float x34; } *)a0;
- (id)sliderInfoToNSDictionary:(const struct CBSliderCommitInfo { long long x0; long long x1; int x2; float x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; int x10; BOOL x11; BOOL x12; float x13; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; int x9; } x14; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; int x9; } x15; BOOL x16; int x17; float x18; float x19; long long x20; float x21; long long x22; BOOL x23; BOOL x24; BOOL x25; float x26; float x27; float x28; int x29; BOOL x30; BOOL x31; BOOL x32; int x33; float x34; } *)a0;

@end
