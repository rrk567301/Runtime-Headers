@class NSObject;
@protocol DEWriter;

@interface DEMultipartWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSObject<DEWriter> *writer;
@property (nonatomic) BOOL partClosed;

- (void)writeData:(id)a0;
- (void)close;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWriter:(id)a0;
- (void)newPart;
- (void)closeMessage;

@end
