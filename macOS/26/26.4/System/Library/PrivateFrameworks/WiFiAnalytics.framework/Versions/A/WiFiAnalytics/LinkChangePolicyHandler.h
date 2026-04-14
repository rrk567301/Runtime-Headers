@class AnalyticsStoreMOHandler;

@interface LinkChangePolicyHandler : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *storeMOHandler;

+ (BOOL)processJoinEvent:(id)a0 on:(id)a1;
+ (BOOL)processLeaveEvent:(id)a0;

- (void).cxx_destruct;
- (id)initWithAnalyticsStore:(id)a0;

@end
