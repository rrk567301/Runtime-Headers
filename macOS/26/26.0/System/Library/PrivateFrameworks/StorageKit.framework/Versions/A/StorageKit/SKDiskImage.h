@class DIDeviceHandle, DIBaseParams, NSURL, NSArray;

@interface SKDiskImage : NSObject

@property (retain, nonatomic) DIDeviceHandle *deviceHandle;
@property (retain, nonatomic) DIBaseParams *diParams;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) NSArray *shadowURLs;

+ (id)diskImageWithURL:(id)a0 params:(id)a1 error:(id *)a2;

- (BOOL)isAttached;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)retrieveInfoWithParams:(id)a0 error:(id *)a1;
- (unsigned long long)diResize:(id)a0 error:(id *)a1;
- (BOOL)ejectWithError:(id *)a0;
- (BOOL)retrieveDIInfoWithParams:(id)a0 error:(id *)a1;
- (BOOL)attachBeforeResizeWithStdinPass:(BOOL)a0 error:(id *)a1;
- (id)attachNoMountWithError:(id *)a0;
- (id)attachWithError:(id *)a0;
- (id)attachWithParams:(id)a0 error:(id *)a1;
- (BOOL)chpassWithParams:(id)a0 error:(id *)a1;
- (BOOL)createBlankWithParams:(id)a0 progress:(id)a1 error:(id *)a2;
- (void)createFromDiskWithParams:(id)a0 progress:(id)a1 completionBlock:(id /* block */)a2;
- (void)createFromFolderWithParams:(id)a0 progress:(id)a1 completionBlock:(id /* block */)a2;
- (id)createWithParams:(id)a0 completionBlock:(id /* block */)a1;
- (void)createWithParams:(id)a0 progressReadyHandler:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (id)deduceDiskWithError:(id *)a0;
- (id)diAttachWithParams:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 diParams:(id)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 diParams:(id)a1 shadowURLs:(id)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 shadowURLs:(id)a1 error:(id *)a2;
- (BOOL)mount:(id)a0 params:(id)a1 outError:(id *)a2;
- (id)newResizerWithParams:(id)a0 error:(id *)a1;
- (id)newShallowResizerWithParams:(id)a0 error:(id *)a1;
- (void)resize:(id)a0 completionBlock:(id /* block */)a1;
- (id)resizeLimitsInternalWithLimitsParams:(id)a0 error:(id *)a1;
- (id)resizeLimitsShallowInternalWithLimitsParams:(id)a0 error:(id *)a1;
- (id)resizeLimitsWithError:(id *)a0;
- (id)resizeLimitsWithLimitsParams:(id)a0 error:(id *)a1;
- (id)resizeWithParams:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)resizeWithParams:(id)a0 progress:(id)a1 error:(id *)a2;

@end
