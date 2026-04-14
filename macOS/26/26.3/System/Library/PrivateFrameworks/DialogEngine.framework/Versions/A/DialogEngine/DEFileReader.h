@class NSURL, NSFileHandle;

@interface DEFileReader : NSObject <DEReader>

@property (retain, nonatomic) NSURL *src;
@property (retain, nonatomic) NSFileHandle *file;

- (id)readDataOfLength:(unsigned long long)a0;
- (void)close;
- (id)init;
- (id)initWithURL:(id)a0;
- (id)readData;
- (void).cxx_destruct;
- (void)dealloc;

@end
