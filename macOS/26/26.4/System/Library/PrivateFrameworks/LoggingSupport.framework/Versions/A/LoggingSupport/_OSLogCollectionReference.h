@class _OSLogDirectoryReference;

@interface _OSLogCollectionReference : NSObject

@property (readonly, nonatomic) _OSLogDirectoryReference *diagnosticsDirectoryReference;
@property (readonly, nonatomic) _OSLogDirectoryReference *timesyncReference;
@property (readonly, nonatomic) _OSLogDirectoryReference *UUIDTextReference;

+ (id)logarchiveDBRef:(id)a0 error:(id *)a1;
+ (id)URLDBRef:(id)a0 warningBlock:(id /* block */)a1 error:(id *)a2;
+ (id)localDBRefFromLogdWithError:(id *)a0;
+ (id)referenceWithURL:(id)a0 error:(id *)a1;
+ (id)localDBRefFromFilesystem:(id /* block */)a0 error:(id *)a1;
+ (id)_filesystemDBRef:(const char *)a0 timesyncPath:(const char *)a1 uuidPath:(const char *)a2 warningBlock:(id /* block */)a3 error:(id *)a4;

- (id)initWithDiagnosticsDirectory:(id)a0 timesyncDirectory:(id)a1 UUIDTextDirectory:(id)a2;
- (void).cxx_destruct;
- (void)close;

@end
