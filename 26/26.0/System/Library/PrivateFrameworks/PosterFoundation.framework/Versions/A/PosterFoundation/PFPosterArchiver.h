@class NSURL, NSFileManager, BSProcessHandle;

@interface PFPosterArchiver : NSObject {
    NSFileManager *_fileManager;
    NSURL *_unarchivingContainerURL;
    BSProcessHandle *_processHandle;
}

+ (id)archiveExtensionForFormat:(long long)a0;
+ (id)archivePath:(id)a0 format:(long long)a1 error:(out id *)a2;
+ (long long)formatForData:(id)a0;
+ (long long)formatForDataAtURL:(id)a0;
+ (long long)minSupportedArchiveVersion;
+ (id)unarchivePathAtURL:(id)a0 format:(long long)a1 error:(out id *)a2;
+ (id)unarchivePathFromData:(id)a0 format:(long long)a1 error:(out id *)a2;

- (id)initWithFileManager:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_unarchiveWithHandler:(id /* block */)a0 manifest:(out id *)a1 error:(out id *)a2;
- (id)archivePath:(id)a0 format:(long long)a1 error:(out id *)a2;
- (id)initWithFileManager:(id)a0 processHandle:(id)a1 unarchivingContainerURL:(id)a2;
- (id)initWithFileManager:(id)a0 unarchivingContainerURL:(id)a1;
- (id)unarchivePathAppleArchiveAtURL:(id)a0 manifest:(out id *)a1 error:(out id *)a2;
- (id)unarchivePathAppleArchiveData:(id)a0 manifest:(out id *)a1 error:(out id *)a2;
- (id)unarchivePathAtURL:(id)a0 format:(long long)a1 error:(out id *)a2;
- (id)unarchivePathFromData:(id)a0 format:(long long)a1 error:(out id *)a2;
- (id)unarchivePathZipArchiveAtURL:(id)a0 manifest:(out id *)a1 error:(out id *)a2;
- (id)unarchivePathZipArchiveData:(id)a0 manifest:(out id *)a1 error:(out id *)a2;

@end
