@class NSString;

@interface VKAnalyticsMRCEvent : VKAnalyticsEvent

@property (nonatomic) long long eventType;
@property (retain, nonatomic) NSString *barcodeSymbology;
@property (readonly, nonatomic) long long dataType;

- (long long)type;
- (void).cxx_destruct;
- (id)eventKey;
- (id)description;
- (id)coreAnalyticsDictionary;
- (id)initWithElement:(id)a0 eventType:(long long)a1 customIdentifier:(id)a2;

@end
