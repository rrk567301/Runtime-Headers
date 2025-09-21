@interface VKAnalyticsTextEvent : VKAnalyticsEvent

@property (nonatomic) long long source;
@property (nonatomic) long long textEventType;
@property (nonatomic) unsigned long long selectionLength;
@property (nonatomic) unsigned long long selectionWordCount;
@property (nonatomic) unsigned long long totalLength;
@property (nonatomic) char includesRichPasteboardContent;
@property (nonatomic) SEL macOSKBNavigationSelector;
@property (readonly, nonatomic) long long eventType;

- (id)description;
- (long long)type;
- (id)eventKey;
- (id)coreAnalyticsDictionary;
- (id)initWithSelectionLength:(unsigned long long)a0 totalLength:(unsigned long long)a1 selectionWordCount:(unsigned long long)a2 macOSSelector:(SEL)a3 includesRichPasteBoardContent:(char)a4 eventType:(long long)a5 source:(long long)a6 customIdentifier:(id)a7;

@end
