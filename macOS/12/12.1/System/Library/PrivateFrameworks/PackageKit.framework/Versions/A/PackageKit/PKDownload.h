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

+ (id)downloadWithResumeData:(id)a0 destination:(id)a1 delegate:(id)a2;
+ (BOOL)canDownloadInBackground;
+ (id)downloadWithURL:(id)a0 withChunklistURL:(id)a1 withChunklistSize:(id)a2 delegate:(id)a3;
+ (id)_downloadClasses;
+ (BOOL)canDownloadURL:(id)a0;
+ (BOOL)canDownloadWithResumeData:(id)a0;
+ (void)addDownloadClass:(Class)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)resumeData;
- (void)setDestination:(id)a0 allowOverwrite:(BOOL)a1;
- (id)sourceURL;
- (id)sourcePath;
- (BOOL)validatesDuringDownload;
- (BOOL)failedDownloadValidation;
- (id)initWithURL:(id)a0 withChunklistURL:(id)a1 withChunklistSize:(id)a2 delegate:(id)a3;
- (id)initWithResumeData:(id)a0 destination:(id)a1 delegate:(id)a2;

@end
