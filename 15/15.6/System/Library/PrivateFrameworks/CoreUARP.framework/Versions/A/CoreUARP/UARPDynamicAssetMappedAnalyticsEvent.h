@class UARPDynamicAssetTmapDatabase, NSObject, NSURL, UARPSuperBinaryAsset, NSMutableArray;
@protocol OS_os_log;

@interface UARPDynamicAssetMappedAnalyticsEvent : NSObject {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_coreAnalyticsEvents;
    NSMutableArray *_payloads;
    UARPDynamicAssetTmapDatabase *_tmapDatabase;
    NSObject<OS_os_log> *_log;
}

+ (id)tag;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)send;
- (char)decomposeUARP;
- (char)expandMTICPayloads;
- (char)findMatchingTMAP;
- (char)getAppleModelNumber:(id)a0 inPayload:(id)a1;
- (char)getEventID:(unsigned int *)a0 inPayload:(id)a1;
- (char)prepareAndSend;

@end
