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

- (id)initWithURL:(id)a0;
- (void)send;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (BOOL)decomposeUARP;
- (BOOL)expandMTICPayloads;
- (BOOL)findMatchingTMAP;
- (BOOL)getAppleModelNumber:(id)a0 inPayload:(id)a1;
- (BOOL)getEventID:(unsigned int *)a0 inPayload:(id)a1;
- (id)initWithURL:(id)a0 serialNumber:(id)a1;
- (BOOL)prepareAndSend;

@end
