@interface SiriCoreLinkRecommendationInfo : NSObject {
    char _btPreference;
    char _wifiPreference;
    double _timeTaken;
}

- (id)initWithQueue:(id)a0;
- (void)setLinkMetrics:(id)a0;
- (id)linkMetrics;
- (double)timeTaken;
- (void)setTimeTaken:(double)a0;
- (char)btPreference;
- (void)fetchLinkMetrics:(id /* block */)a0;
- (id)initWithPreferences:(char)a0 wifiPreference:(char)a1 timeTaken:(double)a2 metrics:(id)a3;
- (void)resetLinkMetrics;
- (void)setBTPreference:(char)a0;
- (void)setWiFiPreference:(char)a0;
- (char)wifiPreference;

@end
