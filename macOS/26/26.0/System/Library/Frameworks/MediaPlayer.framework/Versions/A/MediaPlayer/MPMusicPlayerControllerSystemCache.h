@class NSUserDefaults, MPMusicPlayerQueueDescriptor, MPMusicPlayerControllerNowPlaying;

@interface MPMusicPlayerControllerSystemCache : NSObject {
    NSUserDefaults *_defaults;
}

@property (class, readonly, nonatomic) MPMusicPlayerControllerSystemCache *sharedCache;

@property (retain, nonatomic) MPMusicPlayerControllerNowPlaying *nowPlaying;
@property (retain, nonatomic) MPMusicPlayerQueueDescriptor *queueDescriptor;
@property (readonly, nonatomic) BOOL hasCachedData;

- (id)_init;
- (void)clearCache;
- (void).cxx_destruct;
- (id)_objectOfClass:(Class)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)_saveObject:(id)a0 forKey:(id)a1 error:(id *)a2;

@end
