@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPersonalizationUpdate : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)init;
- (id)consumeUpdates;
- (void)submitUpdate:(id)a0;
- (BOOL)readSyncWithAccessor:(id /* block */)a0;
- (id)initWithFileURL:(id)a0;
- (void)clearUpdates;
- (void).cxx_destruct;

@end
