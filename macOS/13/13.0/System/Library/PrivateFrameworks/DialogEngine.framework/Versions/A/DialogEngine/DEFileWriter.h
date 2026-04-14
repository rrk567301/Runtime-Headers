@class NSURL, NSFileHandle;

@interface DEFileWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSURL *dest;
@property (retain, nonatomic) NSFileHandle *file;

- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)writeData:(id)a0;

@end
