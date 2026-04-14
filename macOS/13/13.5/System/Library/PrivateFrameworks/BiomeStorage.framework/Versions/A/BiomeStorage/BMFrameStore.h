@class NSString, NSMutableOrderedSet, BMFileHandle, BMMemoryMapping;

@interface BMFrameStore : NSObject {
    unsigned int _datastoreVersion;
    BMFileHandle *_backingFile;
    BMMemoryMapping *_frames;
    BMMemoryMapping *_header;
    unsigned long long _permission;
    double _lastAbsoluteTimestamp;
    NSMutableOrderedSet *_framePointers;
}

@property (readonly) unsigned int bytesUsed;
@property (readonly) void *start;
@property (readonly, nonatomic) NSString *segmentName;
@property (readonly, nonatomic) NSString *segmentPath;
@property (nonatomic) BOOL filterByAgeOnRead;
@property (nonatomic) BOOL pruneOnAccess;
@property (nonatomic) double maxAge;
@property (readonly, nonatomic) unsigned long long frameStoreSize;

+ (id)new;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void *)start;
- (void)sync;
- (id)_printablePath;
- (unsigned char)appendFrameHeader:(struct { union { struct { unsigned int x0; unsigned int x1; } x0; unsigned long long x1; } x0; struct { double x0; double x1; unsigned int x2; unsigned int x3; } x1; } *)a0 offset:(unsigned long long *)a1;
- (void)enumerateFromOffset:(unsigned long long)a0 withCallback:(id /* block */)a1;
- (void)enumerateWithOptions:(unsigned long long)a0 fromOffset:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (BOOL)expectedTimestamp:(double)a0;
- (id)frameWithOffset:(unsigned long long)a0 expectedState:(unsigned int)a1;
- (long long)getReverseOffsetIndex:(unsigned long long)a0;
- (id)initWithFileHandle:(id)a0 maxSize:(unsigned long long)a1 permission:(unsigned long long)a2 datastoreVersion:(unsigned long long)a3;
- (BOOL)isCheckSumValidAtOffset:(unsigned long long)a0;
- (BOOL)isValidFrame:(void *)a0 expectedState:(unsigned int)a1 copyOfData:(id *)a2 frameStatus:(struct { unsigned int x0; unsigned int x1; })a3 validations:(BOOL)a4 enumerationOptions:(unsigned long long)a5 errorCode:(int *)a6;
- (void)markFrameAsRemoved:(id)a0;
- (BOOL)resizeBackingFileTo:(unsigned long long)a0;
- (struct { unsigned long long x0; double x1; unsigned int x2; char x3[32]; char x4[4]; })segmentHeaderFromFile:(id)a0 withVersion:(unsigned int)a1 fileSize:(unsigned long long *)a2;
- (void)updateFrameStoreIndex;
- (void)updateHeader;
- (unsigned char)writeFrameForBytes:(const void *)a0 length:(unsigned long long)a1 dataVersion:(unsigned int)a2 timestamp:(double)a3;
- (unsigned char)writeFrameForBytes:(const void *)a0 length:(unsigned long long)a1 dataVersion:(unsigned int)a2 timestamp:(double)a3 outOffset:(unsigned long long *)a4;

@end
