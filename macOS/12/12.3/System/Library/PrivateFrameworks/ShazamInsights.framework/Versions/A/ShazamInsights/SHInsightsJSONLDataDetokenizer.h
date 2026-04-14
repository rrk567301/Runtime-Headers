@class NSMutableData, NSString;
@protocol SHInsightsJSONLDataDetokenizerDelegate, SHInsightsDataStream;

@interface SHInsightsJSONLDataDetokenizer : NSObject <SHInsightsDataStream>

@property (retain) NSMutableData *currentData;
@property (weak) id<SHInsightsJSONLDataDetokenizerDelegate> delegate;
@property (retain) id<SHInsightsDataStream> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)closeWithError:(id *)a0;
- (BOOL)processData:(id)a0 error:(id *)a1;
- (BOOL)writeDataToDelegate:(id)a0 withError:(id *)a1;

@end
