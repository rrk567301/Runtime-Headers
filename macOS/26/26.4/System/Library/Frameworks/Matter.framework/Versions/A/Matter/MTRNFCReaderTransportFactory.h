@interface MTRNFCReaderTransportFactory : NSObject

+ (id)sharedInstance;
+ (void)initialize;

- (id)NFCReaderTransport;
- (id)__NFCReaderTransport;

@end
