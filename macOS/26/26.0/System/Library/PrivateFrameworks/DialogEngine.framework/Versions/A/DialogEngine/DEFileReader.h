@class NSURL, NSFileHandle;

@interface DEFileReader : NSObject <DEReader>

@property (retain, nonatomic) NSURL *src;
@property (retain, nonatomic) NSFileHandle *file;

- (void)dealloc;
- (id)init;
- (id)readDataOfLength:(unsigned long long)a0;
- (id)readData;
- (id)initWithURL:(id)a0;
- (void)close;
- (void).cxx_destruct;

@end
