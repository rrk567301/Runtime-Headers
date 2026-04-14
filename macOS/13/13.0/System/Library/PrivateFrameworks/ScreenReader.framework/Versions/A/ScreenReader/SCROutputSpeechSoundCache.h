@class SCROutputSpeechSynthesizer, NSString, NSDictionary, SCROutputSoundCacheSpeechSynthesizer, NSObject, NSLock;
@protocol OS_dispatch_queue;

@interface SCROutputSpeechSoundCache : NSObject {
    SCROutputSpeechSynthesizer *_fileSynthesizer;
    SCROutputSoundCacheSpeechSynthesizer *_soundCachSynthesizer;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_cachePath;
    NSDictionary *_cacheBOM;
    NSLock *_cacheLock;
    long long _cacheHash;
}

@property (class, readonly) SCROutputSpeechSoundCache *sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_cache;
- (id)_cachePath;
- (id)_osVersion;
- (id)_loadCache;
- (void)_saveCache;
- (id)_fileSynthesizerForVoice:(id)a0;
- (void)_createNewCacheForVoice:(id)a0 volume:(float)a1 rate:(float)a2 intonation:(float)a3 pitchBase:(float)a4;
- (BOOL)_validateCacheForVoice:(id)a0 volume:(float)a1 rate:(float)a2 intonation:(float)a3 pitchBase:(float)a4;
- (id)_soundFromCacheForString:(id)a0 pitchChange:(float)a1;
- (void)_addSoundToCache:(id)a0 filename:(id)a1 string:(id)a2 forVoice:(id)a3 volume:(float)a4 rate:(float)a5 intonation:(float)a6 pitchBase:(float)a7 pitchChange:(float)a8;
- (id)_soundForLiteralString:(id)a0 voice:(id)a1 volume:(float)a2 rate:(float)a3 intonation:(float)a4 pitchBase:(float)a5 pitchChange:(float)a6 action:(id)a7;
- (id)synthesizerForLiteralString:(id)a0 voice:(id)a1 volume:(float)a2 rate:(float)a3 intonation:(float)a4 pitchBase:(float)a5 pitchChange:(float)a6 action:(id)a7;
- (void)_removeUnusedCachedFiles;
- (id)_allFilesReferencedInBOM;
- (id)_uuidFilename;
- (void)_wipeOnDiskCache;
- (void)_wipeCache;
- (id)_cahcheBOMPath;
- (id)_cacheWithHash:(long long *)a0;
- (long long)_setCache:(id)a0;
- (long long)_setCache:(id)a0 ifMatchesHash:(long long *)a1;

@end
