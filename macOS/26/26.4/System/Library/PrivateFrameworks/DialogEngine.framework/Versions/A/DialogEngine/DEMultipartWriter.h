@class NSObject;
@protocol DEWriter;

@interface DEMultipartWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSObject<DEWriter> *writer;
@property (nonatomic) BOOL partClosed;

- (void)writeData:(id)a0;
- (id)initWithWriter:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)close;
- (void)dealloc;
- (void)newPart;
- (void)closeMessage;

@end
