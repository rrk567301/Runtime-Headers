@class NSString;

@interface PFFileIOStream : PFFileIStream <PFOStream>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)truncateLength:(long long)a0;
- (char)openStream;
- (char)reserveLength:(long long)a0;
- (char)writeStream:(id)a0;
- (char)writeStream:(id)a0 blockSize:(unsigned long long)a1;
- (char)writeStream:(const char *)a0 length:(unsigned long long)a1 written:(unsigned long long *)a2;

@end
