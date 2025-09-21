@class NSData, NSString, NSURL, NSMutableDictionary, NSMutableArray, NSObject, UARPDynamicAssetCmapDatabase, UARPSuperBinaryAsset;
@protocol OS_os_log;

@interface UARPDynamicAssetCrashLogEvent : NSObject {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSObject<OS_os_log> *_log;
    NSMutableArray *_preProcessedCrashLogs;
    NSMutableArray *_processedCrashLogs;
    unsigned int _productId;
    char _testMode;
    NSData *_processedCrashInstanceData;
    NSMutableDictionary *_processedCrashInstance;
    UARPDynamicAssetCmapDatabase *_cmapDatabase;
}

@property (retain) NSString *appleModelNumber;

+ (id)tag;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)sendSpeedTracer;
- (char)decomposeUARP;
- (char)expandCRSHPayloads;
- (char)expandToDirectory:(id)a0 forRemoteEndpoint:(id)a1;
- (char)findMatchingCMAP;
- (char)getCoreName:(id)a0 inPayload:(id)a1;
- (char)processCrashAdditionalInfo;
- (char)processCrashInstance;

@end
