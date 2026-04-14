@class NSMutableDictionary, NSArray, NSOperationQueue, NSMutableArray;

@interface VUIMediaInfoFetchController : NSObject

@property (retain, nonatomic) NSOperationQueue *imageQueue;
@property (retain, nonatomic) NSMutableArray *imageOperations;
@property (retain, nonatomic) NSMutableDictionary *prewarmedPlayers;
@property (copy, nonatomic) NSArray *mediaInfos;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long playerPreloadOffset;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMediaInfos:(id)a0;
- (void)_populateQueueWithMediaInfos:(id)a0;
- (void)_updatePrewarmedPlayers;
- (id)_prewarmIndices;
- (void)_removePrewarmedPlayerForIdentifier:(id)a0;
- (id)_identifierForPlaylist:(id)a0 isForPrewarming:(BOOL)a1;
- (void)setMediaInfo:(id)a0 atIndex:(unsigned long long)a1;
- (void)appendMediaInfos:(id)a0;
- (void)removeMediaInfoAtIndex:(unsigned long long)a0;
- (id)_createPlayerWithPlaylist:(id)a0 isForPrewarming:(BOOL)a1;
- (void)loadImageAtIndex:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)loadPlayerAtIndex:(unsigned long long)a0;

@end
