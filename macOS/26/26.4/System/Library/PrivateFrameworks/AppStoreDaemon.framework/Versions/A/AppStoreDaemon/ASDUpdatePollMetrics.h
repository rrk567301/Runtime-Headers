@class NSString, NSArray, NSDate;

@interface ASDUpdatePollMetrics : NSObject

@property (copy, nonatomic) NSDate *pollTime;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSArray *bundleIDs;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)dictionary;

@end
