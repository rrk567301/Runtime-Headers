@class NSNumber;

@interface RTHintManagerNotificationDidUpdate : RTNotification

@property (retain, nonatomic) NSNumber *hintSourcesUpdated;

+ (id)sourcesUpdatedForHints:(id)a0;

- (id)initWithHints:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
