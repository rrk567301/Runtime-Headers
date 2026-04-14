@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPersonalizationUpdate : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)consumeUpdates;
- (BOOL)readSyncWithAccessor:(id /* block */)a0;
- (void)submitUpdate:(id)a0;
- (id)initWithFileURL:(id)a0;
- (void)clearUpdates;
- (void).cxx_destruct;
- (id)init;

@end
