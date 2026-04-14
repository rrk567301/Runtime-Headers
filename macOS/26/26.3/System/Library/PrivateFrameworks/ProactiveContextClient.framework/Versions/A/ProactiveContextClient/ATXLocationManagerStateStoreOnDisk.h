@class NSString;
@protocol ATXLocationManagerStateStoreOnDiskEnv;

@interface ATXLocationManagerStateStoreOnDisk : NSObject <ATXLocationManagerStateStore> {
    NSString *_path;
    id<ATXLocationManagerStateStoreOnDiskEnv> _env;
    id /* block */ _deferredLoadCallback;
    int _fd;
}

@property double cacheExpirationInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)write:(id)a0;
- (BOOL)_tryToOpen;
- (void)clear;
- (id)loadNowOrCallLater:(id /* block */)a0;
- (void)_deviceDidUnlock;
- (id)initWithLocationParameters:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPath:(id)a0 environment:(id)a1 locationParameters:(id)a2;

@end
