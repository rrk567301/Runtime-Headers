@class AnalyticsStoreMOHandler;

@interface LinkChangePolicyHandler : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *storeMOHandler;

+ (BOOL)processJoinEvent:(id)a0;
+ (BOOL)processLeaveEvent:(id)a0;

- (id)initWithAnalyticsStore:(id)a0;
- (void).cxx_destruct;

@end
