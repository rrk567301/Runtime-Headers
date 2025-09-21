@class UARPDynamicAssetTmapDatabase, NSObject, NSString, NSURL, UARPSuperBinaryAsset, NSMutableArray;
@protocol OS_os_log;

@interface UARPDynamicAssetMappedAnalyticsEvent : NSObject {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_coreAnalyticsEvents;
    NSMutableArray *_payloads;
    UARPDynamicAssetTmapDatabase *_tmapDatabase;
    NSObject<OS_os_log> *_log;
    NSString *_serialNumber;
}

+ (id)tag;

- (void)send;
- (id)init;
- (id)description;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)decomposeUARP;
- (BOOL)expandMTICPayloads;
- (BOOL)findMatchingTMAP;
- (BOOL)getAppleModelNumber:(id)a0 inPayload:(id)a1;
- (BOOL)getEventID:(unsigned int *)a0 inPayload:(id)a1;
- (id)initWithURL:(id)a0 serialNumber:(id)a1;
- (BOOL)prepareAndSend;

@end
