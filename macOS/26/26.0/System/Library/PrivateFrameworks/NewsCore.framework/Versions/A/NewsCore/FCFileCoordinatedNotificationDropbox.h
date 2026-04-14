@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedNotificationDropbox : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (void)depositWithAccessor:(id /* block */)a0 completion:(id /* block */)a1;
- (void)peekSyncWithAccessor:(id /* block */)a0;
- (id)init;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;

@end
