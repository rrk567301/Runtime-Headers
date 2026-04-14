@class NSString, NSOutputStream;
@protocol SHDataStream;

@interface SHDataStreamOutput : NSObject <SHDataStream>

@property (retain) NSOutputStream *outputStream;
@property (retain) id<SHDataStream> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDestination:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)closeWithError:(id *)a0;
- (BOOL)processData:(id)a0 error:(id *)a1;

@end
