@class NSString;

@interface CHFeatureFlags : NSObject <CHFeatureFlags>

@property (readonly, nonatomic) BOOL increaseCallHistoryEnabled;
@property (readonly, nonatomic) BOOL callHistorySearchEnabled;
@property (readonly, nonatomic) BOOL keepCallsEnabled;
@property (readonly, nonatomic) BOOL newCallHistoryStoreEnabled;
@property (readonly, nonatomic) BOOL isDualSimParityEnabled;
@property (readonly, nonatomic) BOOL isDefaultDialerEnabled;
@property (readonly, nonatomic) BOOL junkFilteringEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
