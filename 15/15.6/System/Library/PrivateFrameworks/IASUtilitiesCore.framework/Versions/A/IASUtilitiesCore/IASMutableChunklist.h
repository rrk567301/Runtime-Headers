@class NSURL, NSData;

@interface IASMutableChunklist : IASChunklist

@property (retain) NSURL *mappedFileURL;
@property unsigned int defaultChunkSize;
@property char setSignatureHeaderOnly;
@property char *memoryBuffer;
@property unsigned long long memoryBufferSize;
@property unsigned long long fileLength;
@property (readonly) NSData *chunklistData;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 options:(id)a1 error:(id *)a2;
- (char)writeToURL:(id)a0 atomically:(char)a1;
- (void)_stripSignature;
- (char)_addSHA256Checksum;
- (void)_buildChunklistHeader;
- (void)_resizeFileToLength:(unsigned long long)a0;
- (char)_signWithEFISign;
- (void)_updateChunk:(unsigned long long)a0 withData:(id)a1;
- (char)appendChunksFromData:(id)a0;
- (id)initWithFileSettings:(id)a0;
- (char)signChunklist:(int)a0;

@end
