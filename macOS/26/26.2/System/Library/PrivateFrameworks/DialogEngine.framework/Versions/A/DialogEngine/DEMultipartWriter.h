@class NSObject;
@protocol DEWriter;

@interface DEMultipartWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSObject<DEWriter> *writer;
@property (nonatomic) BOOL partClosed;

- (id)initWithWriter:(id)a0;
- (void)writeData:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)newPart;
- (void)closeMessage;

@end
