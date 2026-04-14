@class NSArray;

@interface SUIBSessionRetrievedMutation : NSObject

@property (nonatomic) unsigned long long outcome;
@property (copy, nonatomic) NSArray *retrievedPayload;

- (void).cxx_destruct;
- (id)init;

@end
