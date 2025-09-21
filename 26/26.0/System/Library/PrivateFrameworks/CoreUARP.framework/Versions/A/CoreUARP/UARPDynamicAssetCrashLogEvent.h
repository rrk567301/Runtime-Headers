@class NSData, NSString, NSURL, NSMutableDictionary, NSDictionary, NSObject, UARPDynamicAssetCmapDatabase, UARPSuperBinaryAsset;
@protocol OS_os_log;

@interface UARPDynamicAssetCrashLogEvent : NSObject {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_preProcessedCrashLogs;
    unsigned int _productId;
    BOOL _testMode;
    NSData *_processedCrashInstanceData;
    NSDictionary *_processedCrashInstance;
    UARPDynamicAssetCmapDatabase *_cmapDatabase;
}

@property (readonly) NSString *appleModelNumber;

+ (id)tag;

- (id)init;
- (id)description;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)sendSpeedTracer;
- (BOOL)decomposeUARP;
- (BOOL)expandToDirectory:(id)a0 forRemoteEndpoint:(id)a1;
- (BOOL)findMatchingCMAP;
- (BOOL)getCoreName:(id)a0 inPayload:(id)a1;
- (BOOL)processCrashAdditionalInfo;
- (BOOL)processCrashInstance;

@end
