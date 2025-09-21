@class NSObject;
@protocol OS_dispatch_queue;

@interface CSKFileSystem : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *systemSerialQueue;
@property (copy, nonatomic) id /* block */ handler;

+ (id)sharedInstance;
+ (char)isFileAtPathValidKtraceLogFile:(id)a0;
+ (id)_findPath:(id)a0;
+ (id)_realUserHomeDirectory;
+ (id)applicationURLForLogFile:(id)a0;
+ (id)archiveFileExtensions;
+ (char)doesURLPointToValidDirectory:(id)a0;
+ (char)doesURLPointToValidDirectory:(id)a0 withExtension:(id)a1;
+ (char)doesURLPointToValidFile:(id)a0;
+ (char)doesURLPointToValidFile:(id)a0 withExtension:(id)a1;
+ (void)enumerateContentAtURL:(id)a0 properties:(id)a1 options:(unsigned long long)a2 handler:(id /* block */)a3;
+ (char)isCrashJSONCompatibleTypeForLogFile:(id)a0;
+ (char)isExtensionAnArchive:(id)a0;
+ (char)isFileAtPathValidASLFile:(id)a0;
+ (char)isFileAtPathValidLogArchive:(id)a0;
+ (char)isFileAtURLASLFile:(id)a0;
+ (char)isFileAtURLCoreAnalyticsFile:(id)a0;
+ (char)isFileAtURLCrashLogFile:(id)a0;
+ (char)isFileAtURLJSONFile:(id)a0;
+ (char)isFileAtURLLogFile:(id)a0;
+ (char)isFileAtURLMiscLogFile:(id)a0;
+ (char)isFileAtURLSpinLogFile:(id)a0;
+ (char)isJSONCompatibleTypeForFile:(id)a0;
+ (char)isJSONCompatibleTypeForFile:(id)a0 allowedTypes:(id)a1;
+ (id)unarchiveExecutablePathForExtension:(id)a0;
+ (id)userDiagnosticReportsPath;
+ (id)userLibraryLogsPath;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchFilesAtURL:(id)a0 deep:(char)a1 queue:(id)a2 target:(id)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (void)_fetchFilesAtURL:(id)a0 deep:(char)a1 target:(id)a2 completionHandler:(id /* block */)a3;
- (void)asyncDeepFetchFilesAtURL:(id)a0 queue:(id)a1 target:(id)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)asyncDeepFetchFilesAtURL:(id)a0 target:(id)a1 completionHandler:(id /* block */)a2;
- (void)asyncFetchDirectoriesAtURL:(id)a0 target:(id)a1 completionHandler:(id /* block */)a2;
- (void)asyncFetchFilesAtURL:(id)a0 target:(id)a1 completionHandler:(id /* block */)a2;

@end
