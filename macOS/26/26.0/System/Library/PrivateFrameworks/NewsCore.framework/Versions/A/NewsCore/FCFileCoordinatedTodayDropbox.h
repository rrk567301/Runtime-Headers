@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayDropbox : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (void)depositWithAccessor:(id /* block */)a0 completion:(id /* block */)a1;
- (BOOL)peekSyncWithAccessor:(id /* block */)a0;
- (BOOL)depositSyncWithAccessor:(id /* block */)a0;
- (id)init;
- (void)peekWithAccessor:(id /* block */)a0;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;

@end
