@class NSString;

@interface VKAnalyticsMRCEvent : VKAnalyticsEvent

@property (nonatomic) long long eventType;
@property (retain, nonatomic) NSString *barcodeSymbology;
@property (readonly, nonatomic) long long dataType;

- (void).cxx_destruct;
- (long long)type;
- (id)description;
- (id)eventKey;
- (id)coreAnalyticsDictionary;
- (id)initWithElement:(id)a0 eventType:(long long)a1 customIdentifier:(id)a2;

@end
