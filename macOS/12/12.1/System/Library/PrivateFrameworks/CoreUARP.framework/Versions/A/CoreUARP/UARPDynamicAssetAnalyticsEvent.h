@class NSString, NSDictionary, NSURL, UARPSuperBinaryAsset;

@interface UARPDynamicAssetAnalyticsEvent : NSObject {
    NSURL *_url;
    NSString *_eventName;
    NSDictionary *_eventDictionary;
    UARPSuperBinaryAsset *_asset;
}

- (id)description;
- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)send;
- (BOOL)decomposeUARP;

@end
