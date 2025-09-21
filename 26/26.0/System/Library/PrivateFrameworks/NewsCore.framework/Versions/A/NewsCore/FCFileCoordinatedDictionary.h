@class NSSet, FCAsyncSerialQueue, NSURL, NSOperationQueue, NSString;

@interface FCFileCoordinatedDictionary : NSObject <NSFilePresenter>

@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSSet *allowedClasses;
@property (readonly, nonatomic) FCAsyncSerialQueue *asyncAccessQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)writeSyncWithAccessor:(id /* block */)a0;
- (id)initWithFileURL:(id)a0 allowedClasses:(id)a1;
- (id)initWithFileURL:(id)a0 allowedClasses:(id)a1 qualityOfService:(long long)a2;
- (BOOL)readSyncWithAccessor:(id /* block */)a0;
- (void)writeWithAccessor:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)readWithAccessor:(id /* block */)a0;

@end
