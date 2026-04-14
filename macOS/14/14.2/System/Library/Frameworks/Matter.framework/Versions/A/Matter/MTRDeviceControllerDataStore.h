@class MTRDeviceController, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MTRDeviceControllerStorageDelegate;

@interface MTRDeviceControllerDataStore : NSObject {
    id<MTRDeviceControllerStorageDelegate> _storageDelegate;
    NSObject<OS_dispatch_queue> *_storageDelegateQueue;
    MTRDeviceController *_controller;
    NSMutableArray *_nodesWithResumptionInfo;
}

- (void).cxx_destruct;
- (id)_findResumptionInfoWithKey:(id)a0;
- (void)clearAllResumptionInfo;
- (id)fetchLastLocallyUsedNOC;
- (id)findResumptionInfoByNodeID:(id)a0;
- (id)findResumptionInfoByResumptionID:(id)a0;
- (id)initWithController:(id)a0 storageDelegate:(id)a1 storageDelegateQueue:(id)a2;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })storeLastLocallyUsedNOC:(id)a0;
- (void)storeResumptionInfo:(id)a0;

@end
