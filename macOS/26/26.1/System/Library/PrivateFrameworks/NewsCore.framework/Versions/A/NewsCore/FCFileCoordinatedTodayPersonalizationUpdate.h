@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPersonalizationUpdate : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)initWithFileURL:(id)a0;
- (void)clearUpdates;
- (BOOL)readSyncWithAccessor:(id /* block */)a0;
- (void)submitUpdate:(id)a0;
- (void).cxx_destruct;
- (id)consumeUpdates;
- (id)init;

@end
