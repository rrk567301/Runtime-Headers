@class NSMutableData, NSString;
@protocol SHDataStream, SHJSONLDataDetokenizerDelegate;

@interface SHJSONLDataDetokenizer : NSObject <SHDataStream>

@property (retain) NSMutableData *currentData;
@property (weak) id<SHJSONLDataDetokenizerDelegate> delegate;
@property (retain) id<SHDataStream> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)closeWithError:(id *)a0;
- (char)processData:(id)a0 error:(id *)a1;
- (char)writeDataToDelegate:(id)a0 withError:(id *)a1;

@end
