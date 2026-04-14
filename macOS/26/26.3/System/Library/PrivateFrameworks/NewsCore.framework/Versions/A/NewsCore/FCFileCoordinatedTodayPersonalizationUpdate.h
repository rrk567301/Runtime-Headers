@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPersonalizationUpdate : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)initWithFileURL:(id)a0;
- (void)clearUpdates;
- (id)init;
- (id)consumeUpdates;
- (BOOL)readSyncWithAccessor:(id /* block */)a0;
- (void).cxx_destruct;
- (void)submitUpdate:(id)a0;

@end
