@class NSString, CPAnalyticsEventMatcher, NSObject;

@interface CPAnalyticsCoreDuetEventMatcher : CPAnalyticsEventMatcher {
    CPAnalyticsEventMatcher *_eventMatcher;
}

@property (readonly, nonatomic) NSString *datasetName;
@property (readonly, nonatomic) NSString *identifierPropertyName;
@property (readonly, nonatomic) NSString *subsetPropertyName;
@property (readonly, nonatomic) NSObject *subsetPropertyValue;
@property (readonly, nonatomic) char matchNextEvent;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (char)doesMatch:(id)a0;

@end
