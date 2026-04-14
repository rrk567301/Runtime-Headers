@class NSString, NSOutputStream;
@protocol SHInsightsDataStream;

@interface SHInsightsDataStreamOutput : NSObject <SHInsightsDataStream>

@property (retain) NSOutputStream *outputStream;
@property (retain) id<SHInsightsDataStream> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDestination:(id)a0;
- (BOOL)closeWithError:(id *)a0;
- (BOOL)processData:(id)a0 error:(id *)a1;

@end
