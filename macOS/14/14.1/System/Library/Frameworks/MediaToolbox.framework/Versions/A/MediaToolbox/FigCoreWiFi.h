@class CWFInterface, NSDictionary, NSData;

@interface FigCoreWiFi : NSObject {
    struct OpaqueFigReentrantMutex { } *_wifiStatsLock;
    CWFInterface *cwfInterface;
    NSDictionary *wifiStats;
    NSData *ssid;
}

- (void)dealloc;
- (id)initWithError:(id *)a0;
- (id)copyAllWiFiStats;

@end
