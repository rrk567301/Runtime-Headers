@class NSObject;
@protocol DEWriter;

@interface DEMultipartWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSObject<DEWriter> *writer;
@property (nonatomic) BOOL partClosed;

- (void)writeData:(id)a0;
- (id)initWithWriter:(id)a0;
- (void)close;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)newPart;
- (void)closeMessage;

@end
