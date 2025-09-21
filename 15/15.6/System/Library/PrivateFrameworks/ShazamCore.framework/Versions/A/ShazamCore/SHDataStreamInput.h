@class NSString;
@protocol SHDataStream;

@interface SHDataStreamInput : NSObject <SHDataStream>

@property (retain) id<SHDataStream> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)closeWithError:(id *)a0;
- (char)readFromURL:(id)a0 error:(id *)a1;
- (char)loadDataFromURL:(id)a0 error:(id *)a1;
- (char)processData:(id)a0 error:(id *)a1;

@end
