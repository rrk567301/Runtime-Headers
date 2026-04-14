@class NSURL, NSData;

@interface IASMutableChunklist : IASChunklist

@property (retain) NSURL *mappedFileURL;
@property unsigned int defaultChunkSize;
@property BOOL setSignatureHeaderOnly;
@property char *memoryBuffer;
@property unsigned long long memoryBufferSize;
@property unsigned long long fileLength;
@property (readonly) NSData *chunklistData;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)initWithData:(id)a0 options:(id)a1 error:(id *)a2;
- (void)_resizeFileToLength:(unsigned long long)a0;
- (void)_buildChunklistHeader;
- (void)_stripSignature;
- (BOOL)_addSHA256Checksum;
- (BOOL)_signWithEFISign;
- (void)_updateChunk:(unsigned long long)a0 withData:(id)a1;
- (id)initWithFileSettings:(id)a0;
- (BOOL)signChunklist:(int)a0;
- (BOOL)appendChunksFromData:(id)a0;

@end
