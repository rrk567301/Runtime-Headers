@class NSString, NSArray;

@interface SUIBSessionRetrievedPayloadMutation : NSObject

@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long outcome;
@property (copy, nonatomic) NSArray *messages;
@property (copy, nonatomic) NSString *errorDescription;

- (void).cxx_destruct;
- (id)init;

@end
