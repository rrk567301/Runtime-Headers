@class NSURL, NSFileHandle;

@interface DEFileReader : NSObject <DEReader>

@property (retain, nonatomic) NSURL *src;
@property (retain, nonatomic) NSFileHandle *file;

- (id)readDataOfLength:(unsigned long long)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)readData;
- (id)init;
- (void)close;
- (void)dealloc;

@end
