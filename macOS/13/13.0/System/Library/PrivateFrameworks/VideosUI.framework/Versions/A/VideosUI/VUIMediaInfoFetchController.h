@class NSOperationQueue, NSMutableArray, NSArray;

@interface VUIMediaInfoFetchController : NSObject

@property (retain, nonatomic) NSOperationQueue *imageQueue;
@property (retain, nonatomic) NSMutableArray *imageOperations;
@property (retain, nonatomic) NSMutableArray *players;
@property (copy, nonatomic) NSArray *mediaInfos;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMediaInfos:(id)a0;
- (void)_populateQueueWithMediaInfos:(id)a0;
- (void)setMediaInfo:(id)a0 atIndex:(unsigned long long)a1;
- (void)appendMediaInfos:(id)a0;
- (void)removeMediaInfoAtIndex:(unsigned long long)a0;
- (id)_createPlayerFromMediaInfo:(id)a0;
- (void)loadImageAtIndex:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)loadPlayerAtIndex:(unsigned long long)a0;

@end
