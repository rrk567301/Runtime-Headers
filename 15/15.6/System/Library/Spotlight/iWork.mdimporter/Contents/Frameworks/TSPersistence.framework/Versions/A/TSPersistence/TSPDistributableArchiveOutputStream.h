@protocol SFUSimpleOutputStream;

@interface TSPDistributableArchiveOutputStream : NSObject {
    id<SFUSimpleOutputStream> _outputStream;
    long long _offset;
    char _doneWritingObjectEntries;
    char _doneWritingFileDescriptorProtos;
    char _doneWritingClassInfoMap;
    char _descriptorsEnabled;
    char _tocEnabled;
}

- (void).cxx_destruct;
- (id)initWithOutputStream:(id)a0 checkCrc:(unsigned int)a1 enableDescriptors:(char)a2 enableToc:(char)a3 closedCleanly:(char)a4 archivedVersions:(struct { unsigned long long x0; unsigned long long x1; })a5;
- (char)writeEntry:(id)a0 offset:(long long *)a1 headerLength:(unsigned int *)a2 error:(id *)a3;

@end
