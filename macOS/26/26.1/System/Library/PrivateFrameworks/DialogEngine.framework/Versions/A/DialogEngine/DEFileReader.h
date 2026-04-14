@class NSURL, NSFileHandle;

@interface DEFileReader : NSObject <DEReader>

@property (retain, nonatomic) NSURL *src;
@property (retain, nonatomic) NSFileHandle *file;

- (id)readData;
- (void)close;
- (id)readDataOfLength:(unsigned long long)a0;
- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
