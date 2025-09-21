@class HMFTimer, NSMutableDictionary, NSDictionary, NSString, NSNumber;

@interface HMIPreference : HMFObject <HMFTimerDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMIPreference *sharedInstance;
@property (class, readonly) NSDictionary *qosMap;
@property (class, readonly) char isProductTypeJ42;
@property (class, readonly) char isProductTypeJ105;
@property (class, readonly) char isProductTypeJ305;
@property (class, readonly) char isProductTypeJ255;
@property (class, readonly) char isProductTypeB238;
@property (class, readonly) char isProductTypeB520;
@property (class, readonly) char isProductTypeB620;
@property (class, readonly) char isAudioAccessory;
@property (class, readonly) char isInternalInstall;
@property (class, retain) NSNumber *pretendProductType;

@property (readonly) HMFTimer *preferenceCacheFlushTimer;
@property (readonly, nonatomic) NSMutableDictionary *preferenceCache;
@property (readonly, nonatomic) NSMutableDictionary *preferenceLoggedValues;
@property (readonly, nonatomic) NSMutableDictionary *preferenceOverridesInternal;
@property (readonly) char usesCPUOnly;
@property (readonly) char shouldUseCPUOnlyForVisionFaceDetection;
@property (readonly) char shouldEnableTorsoRecognition;
@property (readonly) double maxAnalysisFPSForCurrentThermalLevel;
@property (readonly) char isIdle;
@property (readonly) unsigned int analysisQOS;
@property (readonly) NSDictionary *preferenceOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)productType;
+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (void)addPreferenceOverrideFromDictionary:(id)a0;
- (char)boolPreferenceForKey:(id)a0 defaultValue:(char)a1;
- (char)hasPreferenceForKey:(id)a0;
- (void)logPreferenceForKey:(id)a0 value:(id)a1;
- (double)maxAnalysisFPSForCurrentPeakPowerPressureLevel;
- (double)maxAnalysisFPSForSystemResourceUsageLevel:(long long)a0;
- (unsigned long long)maxConcurrentAnalyzersForCurrentPeakPowerPressureLevel;
- (unsigned long long)maxConcurrentAnalyzersForCurrentThermalLevel;
- (unsigned long long)maxConcurrentAnalyzersForSystemResourceUsageLevel:(long long)a0;
- (id)numberPreferenceForKey:(id)a0;
- (id)numberPreferenceForKey:(id)a0 defaultValue:(id)a1;
- (id)numberPreferenceForKey:(id)a0 defaultValue:(id)a1 withMap:(id)a2;
- (id)numberPreferenceForKey:(id)a0 defaultValue:(id)a1 withParser:(id /* block */)a2;
- (void)removeAllPreferenceOverrides;
- (void)setPreferenceOverrideFromDictionary:(id)a0;
- (char)shouldGenerateThumbnailForAnalysisFPS:(double)a0;
- (id)stringPreferenceForKey:(id)a0 defaultValue:(id)a1;
- (id)systemPreferenceValueForKey:(id)a0;
- (id)valuePreferenceForKey:(id)a0 defaultValue:(id)a1 withMap:(id)a2;
- (id)valuePreferenceForKey:(id)a0 defaultValue:(id)a1 withParser:(id /* block */)a2;

@end
