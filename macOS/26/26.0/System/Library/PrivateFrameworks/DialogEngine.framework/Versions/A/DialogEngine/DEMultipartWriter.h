@class NSObject;
@protocol DEWriter;

@interface DEMultipartWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSObject<DEWriter> *writer;
@property (nonatomic) BOOL partClosed;

- (void)writeData:(id)a0;
- (void)dealloc;
- (id)initWithWriter:(id)a0;
- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)newPart;
- (void)closeMessage;

@end
