@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayDropbox : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)initWithFileURL:(id)a0;
- (BOOL)depositSyncWithAccessor:(id /* block */)a0;
- (void)peekWithAccessor:(id /* block */)a0;
- (void)depositWithAccessor:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)peekSyncWithAccessor:(id /* block */)a0;
- (id)init;

@end
