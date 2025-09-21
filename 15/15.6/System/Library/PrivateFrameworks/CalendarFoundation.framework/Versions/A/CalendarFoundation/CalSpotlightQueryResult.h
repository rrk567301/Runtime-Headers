@class NSString;

@interface CalSpotlightQueryResult : NSObject

@property (retain) NSString *identifier;
@property (retain) NSString *title;
@property (nonatomic, getter=isNaturalLanguageSuggestedEvent) char naturalLanguageSuggestedEvent;

- (void).cxx_destruct;

@end
