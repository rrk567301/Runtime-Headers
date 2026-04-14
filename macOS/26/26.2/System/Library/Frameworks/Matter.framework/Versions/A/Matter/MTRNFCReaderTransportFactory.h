@interface MTRNFCReaderTransportFactory : NSObject

+ (void)initialize;
+ (id)sharedInstance;

- (id)NFCReaderTransport;
- (id)__NFCReaderTransport;

@end
