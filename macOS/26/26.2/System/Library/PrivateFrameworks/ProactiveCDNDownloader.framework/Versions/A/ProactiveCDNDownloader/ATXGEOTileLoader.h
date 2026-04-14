@class NSObject;
@protocol OS_dispatch_queue;

@interface ATXGEOTileLoader : NSObject <ATXGEOTileLoaderProtocol> {
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

- (id)tileKeyListForLocation:(id)a0;
- (void)requestGEOTileDataForLocation:(id)a0 tileLoader:(id)a1 tileDataHandler:(id /* block */)a2;
- (void)requestGEOTileDataForLocation:(id)a0 tileDataHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
