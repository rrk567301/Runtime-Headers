@class NSURL, NSMutableDictionary, NSString;

@interface CKAssetDownloadStagingManager : NSObject <CKPropertiesDescription>

@property (retain, nonatomic) NSMutableDictionary *fileHandlesForInflightLastPathComponent;
@property (readonly, nonatomic) NSURL *inflightDownloadDirectory;
@property (readonly, nonatomic) NSURL *finishedDownloadDirectory;
@property (readonly, copy, nonatomic) NSURL *directory;
@property (retain) NSString *fileProtectionType;
@property char keepInflightFilesOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (char)finishWithAssetDownloadStagingInfo:(id)a0 fileURL:(id *)a1 fileHandle:(id *)a2 error:(id *)a3;
- (id)finishedURLWithInfo:(id)a0;
- (id)inflightLastPathComponentWithInfo:(id)a0;
- (id)inflightURLWithLastPathComponent:(id)a0;
- (id)initWithDirectory:(id)a0;
- (char)openWithAssetDownloadStagingInfo:(id)a0 fileDescriptor:(int *)a1 closeOnDealloc:(char *)a2 error:(id *)a3;

@end
