@class NSURL, NSFileHandle;

@interface DEFileReader : NSObject <DEReader>

@property (retain, nonatomic) NSURL *src;
@property (retain, nonatomic) NSFileHandle *file;

- (id)readData;
- (void)close;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)readDataOfLength:(unsigned long long)a0;
- (id)init;
- (void)dealloc;

@end
