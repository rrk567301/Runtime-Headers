@class NSString, NSArray;

@interface CPAnalyticsMetricEventRoute : NSObject

@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSString *destinationEventKey;
@property (readonly, nonatomic) NSArray *propertiesToInclude;
@property (readonly, nonatomic) char includeEventProperties;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
