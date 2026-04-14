@class NSSet, NSHashTable;

@interface TTSAXResourceManager : NSObject

@property (retain, nonatomic) NSSet *allAvailableLanguages;
@property (retain, nonatomic) NSHashTable *_observers;

+ (id)sharedInstance;

- (void)stopDownloadResourceWithVoiceId:(id)a0;
- (id)resourceWithVoiceId:(id)a0;
- (void)dealloc;
- (id)allVoices:(BOOL)a0;
- (void)downloadResourceWithVoiceId:(id)a0 userInitiated:(BOOL)a1;
- (void)deleteResourceWithVoiceId:(id)a0;
- (void)removeObserver:(id)a0;
- (id)allLanguagesForVoices:(BOOL)a0;
- (id)init;
- (id)resourcesWithLanguage:(id)a0 type:(unsigned long long)a1;
- (id)superCompactVoiceIdForCompactVoiceId:(id)a0;
- (id)_resourcesWithType:(unsigned long long)a0 subType:(unsigned long long)a1 languageCode:(id)a2;
- (id)languageCodeForResourceName:(id)a0 withType:(unsigned long long)a1;
- (id)resourcesWithType:(unsigned long long)a0 subType:(unsigned long long)a1;
- (void)addObserver:(id)a0;
- (id)_resourceWithVoiceId:(id)a0 assetId:(id)a1;
- (void)downloadResourceWithVoiceId:(id)a0;
- (id)speechVoiceWithVoiceId:(id)a0;
- (void)_performBlockOnObservers:(id /* block */)a0;
- (void).cxx_destruct;

@end
