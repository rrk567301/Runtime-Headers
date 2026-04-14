@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedNotificationDropbox : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)initWithFileURL:(id)a0;
- (void)depositWithAccessor:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)peekSyncWithAccessor:(id /* block */)a0;
- (id)init;

@end
