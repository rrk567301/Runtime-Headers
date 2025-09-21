@class NSURL, UARPSuperBinaryAsset, NSMutableArray;

@interface UARPDynamicAssetAnalyticsEvent : NSObject {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_events;
}

+ (id)tag;

- (void)send;
- (id)init;
- (id)description;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)decomposeUARP;

@end
