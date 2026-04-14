@class NSString, NSURL, NSError, NSMutableArray;

@interface CLSAsset : CLSAbstractAsset <CLSRelationable, CLSAssetUploadProgressNotifiable, CLSAssetUploadObservable> {
    BOOL _uploaded;
    NSMutableArray *_uploadObservers;
    NSURL *_ubiquitousContainerURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isUploaded) BOOL uploaded;
@property (nonatomic) double fractionUploaded;
@property (copy, nonatomic) NSError *uploadError;
@property (retain, nonatomic) NSURL *devModeURL;
@property (nonatomic, getter=isStaged) BOOL staged;
@property (copy, nonatomic) NSURL *thumbnailURL;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long displayOrder;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (id)URL;
- (void)setURL:(id)a0;
- (id)initWithFileURL:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (void)mergeWithObject:(id)a0;
- (void)addUploadObserver:(id)a0;
- (void)removeUploadObserver:(id)a0;
- (void)willSaveObject;
- (oneway void)clientRemote_invalidate;
- (void)urlSuitableForOpeningWithCompletion:(id /* block */)a0;
- (void)urlSuitableForStreamingWithCompletion:(id /* block */)a0;
- (oneway void)clientRemote_uploadProgressFraction:(double)a0 error:(id)a1;
- (oneway void)clientRemote_uploadCompleted:(BOOL)a0 url:(id)a1 ubiquitousContainerURL:(id)a2 ubiquitousContainerName:(id)a3 brItemID:(id)a4 brOwnerName:(id)a5 brZoneName:(id)a6 brShareName:(id)a7 fractionUploaded:(double)a8 isTemporary:(BOOL)a9 isStaged:(BOOL)a10 error:(id)a11;
- (void)createShareIfNeeded:(id /* block */)a0;
- (id)initWithURL:(id)a0 ownerPersonID:(id)a1 type:(long long)a2;
- (void)queued_notifyUploadCompletion;
- (id)uploadObservers;
- (void)deleteFileWithCompletion:(id /* block */)a0;
- (void)queued_notifyUploadProgress;
- (id)initWithFileURL:(id)a0 withOwnerPersonID:(id)a1;
- (id)uploadFileIfNeeded:(id *)a0;
- (void)checkForCKShare:(id /* block */)a0;
- (BOOL)deleteFile:(id *)a0;

@end
