@class NSString, NSArray, NSURL, ACAccount, NSData;

@interface AMSMetricsBatch : NSObject

@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) char anonymous;
@property (copy, nonatomic) NSString *canaryIdentifier;
@property (nonatomic) char containsLoadURL;
@property (copy, nonatomic) NSArray *droppedEvents;
@property (copy, nonatomic) NSArray *events;
@property (retain, nonatomic) NSURL *reportURL;
@property (copy, nonatomic) NSArray *skippedEvents;
@property (copy, nonatomic) NSData *serializedEventsData;

- (void).cxx_destruct;

@end
