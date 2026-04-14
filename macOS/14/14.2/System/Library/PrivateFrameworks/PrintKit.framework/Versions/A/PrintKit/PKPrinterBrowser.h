@class NSString, NSMutableDictionary, PKPrintdRPC_BrowseClient;
@protocol PKPrinterBrowserDelegate;

@interface PKPrinterBrowser : NSObject <PKPrintdRPC_BrowseClient_ClientProtocol> {
    unsigned char _originalCellFlag;
    unsigned char _originalWifiFlag;
    PKPrintdRPC_BrowseClient *_browserClient;
}

@property (retain, nonatomic) NSMutableDictionary *printers;
@property (retain, nonatomic) NSMutableDictionary *btDevices;
@property (readonly) BOOL delegateRespondsToProximityUpdate;
@property (nonatomic) id<PKPrinterBrowserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)btlePrinterFound:(id)a0;
- (void)btleRssiUpdated:(id)a0 rssi:(id)a1;
- (id)initWithDelegate:(id)a0 infoDictionary:(id)a1;
- (void)printerAdded:(id)a0 more:(BOOL)a1;
- (void)printerRemoved:(id)a0 more:(BOOL)a1;

@end
