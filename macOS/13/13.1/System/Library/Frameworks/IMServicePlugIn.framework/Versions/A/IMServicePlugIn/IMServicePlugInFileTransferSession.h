@class NSString;

@interface IMServicePlugInFileTransferSession : NSObject {
    struct _IMServicePlugInFileTransferSessionInternal { id x0; id x1; id x2; id x3; id x4; unsigned long long x5; unsigned long long x6; BOOL x7; } *_internal;
}

@property (readonly) NSString *guid;
@property (readonly) NSString *containerName;

+ (void)_registerSession:(id)a0;
+ (void)_unregisterSession:(id)a0;
+ (id)_allSessions;
+ (id)_sessionWithGUID:(id)a0;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_totalBytes;
- (id)_basePath;
- (id)_allFileTransfers;
- (void)_tickUpdateNotification:(id)a0;
- (id)_initWithGUID:(id)a0 pathToTransferMap:(id)a1 containerName:(id)a2;
- (id)_normalizedPathForPath:(id)a0;
- (void)_addFileTransfer:(id)a0;
- (id)_fileTransferForPath:(id)a0;
- (unsigned long long)_transferredBytes;
- (void)_setBasePath:(id)a0;
- (void)_fileTransferDidUpdate:(id)a0;

@end
