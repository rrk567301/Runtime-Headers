@class NSString, NSArray, NSDate;

@interface ASDUpdatePollMetrics : NSObject

@property (copy, nonatomic) NSDate *pollTime;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSArray *bundleIDs;

- (id)init;
- (id)dictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
