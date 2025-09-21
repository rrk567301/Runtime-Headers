@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface GTBulkDataService : NSObject <GTBulkDataService> {
    unsigned long long _nextDownloadHandle;
    NSMutableDictionary *_dataDownloadStore;
    unsigned long long _downloadHighWaterMarkBytes;
    unsigned long long _downloadStoreBytes;
    BOOL _downloadTransmitState;
    NSObject<OS_dispatch_group> *_downloadTransmitOff;
    unsigned long long _nextUploadHandle;
    NSMutableDictionary *_dataUploadingStore;
    NSMutableDictionary *_dataUploadedStore;
    NSMutableDictionary *_dataUploadCompressionAlgorithm;
    NSObject<OS_dispatch_queue> *_dataAccessQueue;
    NSObject<OS_dispatch_queue> *_dataTransferQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)downloadData:(unsigned long long)a0 usingTransferOptions:(id)a1 chunkHandler:(id /* block */)a2;
- (unsigned long long)newUploadWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)uploadChunk:(id)a0 forHandle:(unsigned long long)a1 isFinalChunk:(BOOL)a2 error:(id *)a3;
- (void)waitUntilDownloadCapacity;
- (unsigned long long)handoverDataForDownload:(id)a0;
- (id)initWithDownloadHighWaterMark:(unsigned long long)a0;
- (id)takeDownloadDataForHandle:(unsigned long long)a0;
- (id)takeUploadedDataForHandle:(unsigned long long)a0;

@end
