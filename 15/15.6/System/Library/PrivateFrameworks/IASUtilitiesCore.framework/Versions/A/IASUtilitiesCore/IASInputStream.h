@class NSError, NSString, NSMutableData, NSData, NSURL, NSFileHandle, NSInputStream;

@interface IASInputStream : NSInputStream {
    NSString *_digestAlgorithm;
    NSMutableData *_inputDigestData;
    NSMutableData *_outputDigestData;
    NSError *_streamError;
}

@property (nonatomic) char isOpen;
@property (nonatomic) char isClosed;
@property (nonatomic) void *inputDigestContext;
@property (nonatomic) void *outputDigestContext;
@property (retain, nonatomic) NSData *sourceData;
@property (retain, nonatomic) NSURL *sourceURL;
@property (retain, nonatomic) NSFileHandle *sourceFileHandle;
@property (retain, nonatomic) NSInputStream *sourceInputStream;
@property (nonatomic) unsigned long long sourceFileSystemBlockSize;
@property (nonatomic) unsigned long long sourceFileSystemIOSize;
@property (nonatomic) long long sourceFileOffset;
@property (nonatomic) long long sourceFilePunchOffset;
@property (nonatomic) int sourceFileDescriptor;
@property (nonatomic) char isReadingFromFileDescriptor;
@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) unsigned long long readToLength;
@property (nonatomic) char isEndOfFile;
@property (nonatomic) char shouldManageInputStreamLifecycle;
@property (copy) NSError *streamError;
@property (copy, nonatomic) NSString *digestAlgorithm;
@property (readonly, nonatomic) NSData *inputDigestData;
@property (readonly, nonatomic) NSData *outputDigestData;
@property (nonatomic) char holePunchSource;

+ (void)initialize;
+ (Class)inputStreamSubclassForFormat:(id)a0;
+ (char)registerSubclass:(Class)a0 forFormat:(id)a1;

- (void)dealloc;
- (id)propertyForKey:(id)a0;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)close;
- (char)hasBytesAvailable;
- (id)initWithData:(id)a0;
- (id)initWithFileAtPath:(id)a0;
- (id)initWithURL:(id)a0;
- (void)open;
- (unsigned long long)streamStatus;
- (id)initWithFileDescriptor:(int)a0;
- (char)seekToOffset:(unsigned long long)a0 error:(id *)a1;
- (id)initWithFileDescriptor:(int)a0 readToLength:(unsigned long long)a1;
- (void)_updateDigest:(void *)a0 withBytes:(char *)a1 length:(unsigned int)a2;
- (void)_digestClose;
- (void)_digestOpen;
- (long long)_read:(char *)a0 maxLength:(unsigned long long)a1;
- (long long)_readFromDataIntoBuffer:(char *)a0 maxLength:(unsigned long long)a1;
- (long long)_readFromFileHandleIntoBuffer:(char *)a0 maxLength:(unsigned long long)a1;
- (long long)_readFromInputStreamIntoBuffer:(char *)a0 maxLength:(unsigned long long)a1;
- (char)_seekDataToOffsetWithoutReading:(unsigned long long)a0 error:(id *)a1;
- (char)_seekFileHandleToOffsetWithoutReading:(unsigned long long)a0 error:(id *)a1;
- (char)_seekInputStreamToOffsetWithoutReading:(unsigned long long)a0 error:(id *)a1;
- (void)_updateInputBytes:(char *)a0 length:(unsigned int)a1;
- (void)_updateOutputBytes:(char *)a0 length:(unsigned int)a1;
- (char)forwardSeekingStreamRequiresReads;
- (id)initWithSourceStream:(id)a0;
- (id)initWithSourceStream:(id)a0 manageLifecycle:(char)a1;
- (void)invalidateDigests;
- (long long)seekingCapability;
- (char)updateInputBytes:(char *)a0 length:(unsigned int)a1;
- (void)updateOutputBytes:(char *)a0 length:(unsigned int)a1;

@end
