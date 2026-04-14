@class NSString;

@interface BLDTelemetryBridge : NSObject <PPTDataReaderProtocol>

@property (readonly, copy) NSString *storageFilepath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dataForRequest:(id)a0 withError:(id *)a1;
- (id)initWithStorageFilepath:(id)a0;

@end
