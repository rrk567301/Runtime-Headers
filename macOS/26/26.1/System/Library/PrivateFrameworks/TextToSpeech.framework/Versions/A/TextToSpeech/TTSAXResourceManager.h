@class NSSet, NSHashTable;

@interface TTSAXResourceManager : NSObject

@property (retain, nonatomic) NSSet *allAvailableLanguages;
@property (retain, nonatomic) NSHashTable *_observers;

+ (id)sharedInstance;

- (void)_performBlockOnObservers:(id /* block */)a0;
- (void)downloadResourceWithVoiceId:(id)a0;
- (id)allVoices:(BOOL)a0;
- (void)downloadResourceWithVoiceId:(id)a0 userInitiated:(BOOL)a1;
- (void)deleteResourceWithVoiceId:(id)a0;
- (id)superCompactVoiceIdForCompactVoiceId:(id)a0;
- (id)speechVoiceWithVoiceId:(id)a0;
- (id)languageCodeForResourceName:(id)a0 withType:(unsigned long long)a1;
- (void)dealloc;
- (id)resourcesWithLanguage:(id)a0 type:(unsigned long long)a1;
- (id)resourceWithVoiceId:(id)a0;
- (id)_resourcesWithType:(unsigned long long)a0 subType:(unsigned long long)a1 languageCode:(id)a2;
- (void).cxx_destruct;
- (id)resourcesWithType:(unsigned long long)a0 subType:(unsigned long long)a1;
- (id)_resourceWithVoiceId:(id)a0 assetId:(id)a1;
- (void)removeObserver:(id)a0;
- (void)stopDownloadResourceWithVoiceId:(id)a0;
- (id)allLanguagesForVoices:(BOOL)a0;
- (id)init;
- (void)addObserver:(id)a0;

@end
