@class NSString, NSMutableDictionary, GEOObserverHashTable;

@interface MNAudioSystemOptions : NSObject <GEOConfigChangeListenerDelegate> {
    GEOObserverHashTable *_observers;
    NSMutableDictionary *_guidanceLevels;
    NSMutableDictionary *_guidanceLevelOverrides;
}

@property (readonly, nonatomic) BOOL useHFP;
@property (readonly, nonatomic) BOOL pauseSpokenAudio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (void)unregisterObserver:(id)a0;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (void)_updateGuidanceLevelFromUserSetting:(unsigned long long)a0 transportType:(int)a1;
- (unsigned long long)guidanceLevelForTransportType:(int)a0;
- (id)initWithTempUserOptions:(id)a0;
- (void)setGuidanceLevelOverride:(unsigned long long)a0 transportType:(int)a1;

@end
