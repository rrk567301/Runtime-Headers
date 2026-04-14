@class NSString;
@protocol PKDownloadDelegate, NSObject;

@interface PKDownload : NSObject {
    NSString *_dstPath;
    BOOL _deleteFileOnFailure;
    BOOL _overwriteIfFileExists;
}

@property (readonly, weak) id<PKDownloadDelegate, NSObject> delegate;
@property (readonly) NSString *destinationPath;
@property BOOL downloadInBackground;

+ (id)_downloadClasses;
+ (void)addDownloadClass:(Class)a0;
+ (BOOL)canDownloadURL:(id)a0;
+ (BOOL)canDownloadInBackground;
+ (BOOL)canDownloadWithResumeData:(id)a0;
+ (id)downloadWithURL:(id)a0 withChunklistURL:(id)a1 withChunklistSize:(id)a2 delegate:(id)a3;
+ (id)downloadWithResumeData:(id)a0 destination:(id)a1 delegate:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)resumeData;
- (void)setDestination:(id)a0 allowOverwrite:(BOOL)a1;
- (id)sourceURL;
- (id)sourcePath;
- (id)initWithURL:(id)a0 withChunklistURL:(id)a1 withChunklistSize:(id)a2 delegate:(id)a3;
- (id)initWithResumeData:(id)a0 destination:(id)a1 delegate:(id)a2;
- (BOOL)validatesDuringDownload;
- (BOOL)failedDownloadValidation;

@end
