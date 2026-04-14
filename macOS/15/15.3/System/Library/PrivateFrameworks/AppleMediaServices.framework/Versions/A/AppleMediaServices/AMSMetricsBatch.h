@class NSString, NSArray, NSURL, ACAccount;

@interface AMSMetricsBatch : NSObject

@property (retain) ACAccount *account;
@property BOOL anonymous;
@property (retain) NSString *canaryIdentifier;
@property BOOL containsLoadURL;
@property (retain) NSArray *droppedEvents;
@property (retain) NSArray *eventDictionaries;
@property (retain) NSArray *events;
@property (retain) NSURL *reportURL;
@property (retain) NSArray *skippedEvents;

- (void).cxx_destruct;

@end
