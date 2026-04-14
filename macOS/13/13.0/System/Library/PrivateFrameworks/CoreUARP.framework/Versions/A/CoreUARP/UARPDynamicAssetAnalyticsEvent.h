@class NSURL, UARPSuperBinaryAsset, NSMutableArray;

@interface UARPDynamicAssetAnalyticsEvent : NSObject {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_events;
}

+ (id)tag;

- (id)description;
- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)send;
- (BOOL)decomposeUARP;

@end
