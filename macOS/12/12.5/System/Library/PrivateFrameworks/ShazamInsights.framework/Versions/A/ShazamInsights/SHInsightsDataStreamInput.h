@class NSString;
@protocol SHInsightsDataStream;

@interface SHInsightsDataStreamInput : NSObject <SHInsightsDataStream>

@property (retain) id<SHInsightsDataStream> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)closeWithError:(id *)a0;
- (BOOL)loadDataFromURL:(id)a0 error:(id *)a1;
- (BOOL)processData:(id)a0 error:(id *)a1;
- (BOOL)readFromURL:(id)a0 toStream:(id)a1 error:(id *)a2;

@end
