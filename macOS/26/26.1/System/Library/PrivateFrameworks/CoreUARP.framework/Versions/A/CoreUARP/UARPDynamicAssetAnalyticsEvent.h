@class NSURL, UARPSuperBinaryAsset, NSMutableArray;

@interface UARPDynamicAssetAnalyticsEvent : NSObject {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_events;
}

+ (id)tag;

- (void)send;
- (id)initWithURL:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (BOOL)decomposeUARP;

@end
