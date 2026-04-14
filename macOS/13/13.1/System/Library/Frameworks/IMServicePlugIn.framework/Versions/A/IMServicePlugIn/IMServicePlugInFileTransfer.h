@class NSString, IMServicePlugInFileTransferSession;

@interface IMServicePlugInFileTransfer : NSObject {
    struct _IMServicePlugInFileTransferInternal { id x0; id x1; id x2; id x3; id x4; id x5; BOOL x6; unsigned long long x7; unsigned long long x8; } *_internal;
}

@property (readonly) NSString *guid;
@property (readonly) NSString *path;
@property (readonly) NSString *type;
@property (readonly) unsigned long long transferredBytes;
@property (readonly) unsigned long long totalBytes;
@property (readonly) IMServicePlugInFileTransferSession *session;

+ (id)fileTransferWithPath:(id)a0 type:(id)a1 totalBytes:(unsigned long long)a2;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_url;
- (void)_setSession:(id)a0;
- (id)_initWithGUID:(id)a0 path:(id)a1 type:(id)a2 totalBytes:(unsigned long long)a3;
- (id)initWithPath:(id)a0 type:(id)a1 totalBytes:(unsigned long long)a2;
- (void)_stream:(id)a0 didReadOrWriteBytes:(long long)a1;
- (void)_setActualLastPathComponent:(id)a0;

@end
