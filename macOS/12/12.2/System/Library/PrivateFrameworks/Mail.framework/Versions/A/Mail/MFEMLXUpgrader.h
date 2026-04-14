@class NSBackgroundActivityScheduler;

@interface MFEMLXUpgrader : NSObject

@property (retain, nonatomic) NSBackgroundActivityScheduler *mimeSnipActivityScheduler;
@property (copy, nonatomic) id /* block */ mimeSnipActivityCompletionHandler;
@property (retain, nonatomic) NSBackgroundActivityScheduler *libraryCompressionActivityScheduler;
@property (copy, nonatomic) id /* block */ libraryCompressionCompletionHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_runMIMESnipUpradesIfNeeded;
- (void)_runLibraryCompressionIfNeeded;
- (BOOL)_mimeSnipUpgraderComplete;
- (void)_snipAttachmentMIMEInAccountDirectories:(id)a0;
- (BOOL)_libraryCompressionComplete;
- (void)_compressLibraryDirectories:(id)a0;
- (BOOL)_compressionNeededForMailbox:(id)a0;
- (id)_checkMIMEInEMLXFile:(id)a0;
- (void)_cleanupMessageXAttrsInAccountDirectories:(id)a0;
- (void)runIfNeeded;

@end
