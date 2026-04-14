@class NSString, NSURLSessionUploadTask;

@interface DEDSeedingUploadItem : DEDAttachmentItem

@property (retain) NSString *extensionID;
@property (retain) NSString *filePromiseUUID;
@property long long bytesUploaded;
@property long long totalBytesExpectedToSend;
@property BOOL completed;
@property (retain) NSURLSessionUploadTask *uploadTask;

+ (id)itemAtPath:(id)a0 enclosedFilename:(id)a1 extensionID:(id)a2;

- (void).cxx_destruct;
- (id)description;
- (id)promiseFilename;
- (id)publicDescription;

@end
