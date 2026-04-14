@class NSString;

@interface MTRNFCReaderTransportDelegateBridge : NSObject <MTRNFCReaderTransportDelegate>

@property struct MTRNFCReaderTransportBridge { void /* function */ **x0; id x1; struct NFCReaderTransportDelegate *x2; struct os_unfair_lock_s { unsigned int x0; } x3; } *readerTransport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
