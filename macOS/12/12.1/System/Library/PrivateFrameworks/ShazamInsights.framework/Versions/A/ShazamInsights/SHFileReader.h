@class NSString, NSFileHandle;

@interface SHFileReader : NSObject {
    NSFileHandle *fileHandle;
    unsigned long long currentOffset;
    unsigned long long totalFileLength;
}

@property (copy) NSString *filePath;
@property (copy) NSString *lineDelimiter;
@property unsigned long long chunkSize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0;
- (id)readLine;
- (id)readDataLine;
- (void)enumerateDataLinesUsingBlock:(id /* block */)a0;
- (void)enumerateJSONObjectsUsingBlock:(id /* block */)a0;

@end
