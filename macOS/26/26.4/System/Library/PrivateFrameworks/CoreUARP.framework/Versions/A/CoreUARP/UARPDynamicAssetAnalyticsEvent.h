@class NSURL, UARPSuperBinaryAsset, NSMutableArray;

@interface UARPDynamicAssetAnalyticsEvent : NSObject {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_events;
}

+ (id)tag;

- (id)initWithURL:(id)a0;
- (void)send;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (BOOL)decomposeUARP;

@end
