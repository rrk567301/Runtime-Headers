@class NSManagedObjectID, NSString, NSURL, NSMutableArray, NSCache;

@interface ICAttachmentImageLoadingOperation : NSOperation

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSManagedObjectID *attachmentObjectID;
@property (retain, nonatomic) NSURL *mediaURL;
@property (copy, nonatomic) NSString *cacheKey;
@property (nonatomic) short attachmentType;
@property (nonatomic) char forceFullSizeImage;
@property (retain, nonatomic) NSMutableArray *completionHandlers;

- (void).cxx_destruct;
- (void)main;
- (id /* block */)addCompletionHandler:(id /* block */)a0;
- (id)initWithCache:(id)a0 attachment:(id)a1 attachmentType:(short)a2 forceFullSizeImage:(char)a3 completionHandler:(id /* block */)a4;
- (void)removeCompletionHandler:(id /* block */)a0 cancelIfNoneLeft:(char)a1;

@end
