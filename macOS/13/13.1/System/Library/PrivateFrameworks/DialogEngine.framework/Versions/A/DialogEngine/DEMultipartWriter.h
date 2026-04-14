@class NSObject;
@protocol DEWriter;

@interface DEMultipartWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSObject<DEWriter> *writer;
@property (nonatomic) BOOL partClosed;

- (void)dealloc;
- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)writeData:(id)a0;
- (id)initWithWriter:(id)a0;
- (void)closeMessage;
- (void)newPart;

@end
